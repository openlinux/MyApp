#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <termio.h>
#include <syslog.h>
#include <pthread.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <semaphore.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <bits/signum.h>
#include <sys/resource.h>


/*******************************************************
* 功    能：初始化串口
* 程序名称：int uart_init(int arg, int baud)
* 参    数：arg: 串口号 baud: 波特率
* 返 回 值：成功：串口打开句柄 失败：返回 -1
* 创 建 人：ZB
* 创建日期：07.05.08
* 版本更新
*******************************************************/
int uart_init(int arg, int baud)
{
int fd;
char port[20];
struct termios Opt;
int uartbiit[50]={B115200,B9600,B19200,B4800,B2400,B1200};

sprintf(port,"/dev/s3c2410_serial%d",arg);    /*2.6.31内核的串口设备文件是/dev/s3c2410_serialX(X=0 1 2

                                                     或3), 在mini2440中/dev/ttySACX(X=0 1 2或3)不再是ttyS0,ttyS1,ttyS2*/
printf("port %s \n", port);
fd = open(port, O_RDWR|O_NOCTTY|O_NDELAY);     //打开串口
if (fd<0)
{

            return -1;                 //没有打开返回
}

tcgetattr(fd,&Opt);      //初始化
tcflush(fd,TCIFLUSH);
cfsetispeed(&Opt,uartbiit[baud]);    //设置波特率
cfsetospeed(&Opt,uartbiit[baud]);

Opt.c_cflag &= ~CSIZE;
Opt.c_cflag |= (CS8 | CREAD | CLOCAL);                          //设置数据位
Opt.c_cflag &= ~PARENB;  
Opt.c_oflag &= ~(OPOST);
Opt.c_oflag &= ~(ONLCR|OCRNL);
Opt.c_cflag &= ~CSTOPB;
Opt.c_lflag &= ~(ICANON|ISIG|ECHO|ECHOE|ECHONL|IEXTEN);
Opt.c_iflag &= ~(INPCK|BRKINT|ICRNL|INLCR|IGNCR|ISTRIP|IXON|IXOFF|IXANY);  
Opt.c_iflag &= ~(IGNBRK|IGNPAR|PARMRK|IUCLC);
Opt.c_cc[VMIN] = 0;//////////////////////////////////
Opt.c_cc[VTIME] =10;

   if (tcsetattr(fd,TCSANOW,&Opt) != 0)       //装载初始化参数
{
   perror("SetupSerial!\n");
   close(fd);
   return -1;
}
return(fd);

}

int main()
{
int fd, len = 0;
unsigned char i=0x30;
char buf[20];

if((fd = uart_init(1, 0)) <0)   //打开串口1，波特率为115200；
{
printf("Open uart err \n");
return -1;
}
sprintf(buf, "abcdefgo0hijkl0m/0\0");   //输出内容

for(;;)
{
    //    sprintf(buf, "%c", i++);
	len = write(fd, buf,strlen(buf));        //写串口
	printf("Open uart err \n");      //为测试是不是运行到这里设的输出
if(len > 0)
    {
//	read(fd, buf, sizeof(buf));      //读串口数据
        printf("buf %s\n", buf);    //输出读到的数据
    }
    usleep(200000);
}
return 0;
}
