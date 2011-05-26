#ifndef _INCLUDES_H_
#define _INCLUDES_H_

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h> 
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h> 
#include <dirent.h>
#include <string.h>
#include <signal.h>
#include <stdarg.h>
#include <signal.h>
#include <termios.h>
#include <semaphore.h>
#include <linux/fs.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/types.h> 
#include <sys/ipc.h> 
#include <sys/sem.h> 
#include <sys/stat.h> 
#include <sys/msg.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <pthread.h>

#include "typedefs.h"

#include <iostream>


/*
*   define the DEBUG support .
*/

#define  MSG_NOR		1
#define  MSG_DBG		1
#define  MSG_ERR		1
#define MSG_HEAD		(" ")

#define PRTMSG(enb, format, ...)      \
	if(enb)  \
		{\
			printf("%s:", MSG_HEAD); \
			printf(format, ##__VA_ARGS__ ); \
		}
/*���� ��\������*/

/*����ɱ���������Ի�Ϊ�գ���##��������ʹԤ��������preprocessor��ȥ������ǰ����Ǹ����š�������ں����ʱ��ȷʵ�ṩ��һЩ�ɱ������GNU CPPҲ�Ṥ���������������Щ�ɱ�����ŵ����ŵĺ��档*/


#endif

