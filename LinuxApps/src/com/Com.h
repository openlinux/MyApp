

#ifndef __COM_H__
#define __COM_H__

#include "../../inc/typedefs.h"
#include "../../inc/includes.h"

/*
* Here is class for serial .
*
*/
class Com
{
public:
	Com();
	~Com();
	int Init();
	int Release();
	bool	ComOpen();
	bool ComClose();
	int 	ComRead();
	int 	ComWrite();
	
private:
	void setComPara();


int	m_iComPort;
bool	m_bComConnect;
char m_szComBuf[1024];
u32	m_iBaudRate;

pthread_t m_pthreadRecv;
pthread_t m_pthreadSend;
pthread_mutex_t m_mutexIOSignal;

	
};



#endif
















