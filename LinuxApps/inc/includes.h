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
/*上面 的\不能少*/

/*如果可变参数被忽略或为空，‘##’操作将使预处理器（preprocessor）去除掉它前面的那个逗号。如果你在宏调用时，确实提供了一些可变参数，GNU CPP也会工作正常，它会把这些可变参数放到逗号的后面。*/


#endif

