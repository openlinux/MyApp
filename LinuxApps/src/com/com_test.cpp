#include "Com.h"

#include "../../inc/typedefs.h"
#include "../../inc/includes.h"


#undef MSG_HEAD
#define MSG_HEAD 	("app")

int main(void)
{
	Com com1;
	com1.Init();
	PRTMSG(MSG_DBG, "com test !\n");
		
}








