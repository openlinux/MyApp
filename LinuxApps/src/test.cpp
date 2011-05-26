#include <iostream>
#include "../inc/includes.h"

using namespace std;

int main()
{
	INT32S a = 32;
	int fd ;
	fd = open("log.txt",O_RDWR);
	dup2(fd,2);
	printf("a is : %d\n",a);
	cout<<"This is a cpp test!"<<"\n";
}
