#ifndef _TYPEDEFS_H_
#define _TYPEDEFS_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char	BYTE;

typedef unsigned short	WORD;
typedef unsigned long	DWORD;
typedef unsigned char	byte;
typedef unsigned int	size_t;
typedef unsigned short	ushort;
typedef unsigned int	UINT;
typedef	unsigned short	WORD;
typedef unsigned char	uchar;
typedef unsigned long	ulong;
typedef unsigned int	uint;
typedef int				HANDLE;
typedef void *LPVOID;


typedef unsigned char  BOOLEAN;
typedef unsigned char  INT8U;                   /* Unsigned  8 bit quantity                           */
typedef signed   char  INT8S;                   /* Signed    8 bit quantity                           */
typedef unsigned short INT16U;                  /* Signed   16 bit quantity                           */
typedef signed   short INT16S;                  /* Unsigned 32 bit quantity                           */
typedef unsigned int   INT32U;                  /* Unsigned 32 bit quantity                           */
typedef signed   int   INT32S;                  /* Signed   32 bit quantity                           */
typedef float          FP32;                    /* Single precision floating point                    */
typedef double         FP64;                    /* Double precision floating point                    */



typedef enum {
	FALSE	= 0,
	TRUE	= 1,
}BOOL;

#ifndef  false
#define  false                  0
#endif

#ifndef  true
#define  true                   1
#endif

#ifndef   NULL 
#define   NULL                  ((void*)0)
#endif

#ifndef  PNULL
#define  PNULL                  ((void *)0)
#endif

#endif


