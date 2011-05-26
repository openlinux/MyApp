#############################################################################
#     Makefile for building a multifile  Project
#     Copyright (C) 2010    Wu DaoGuang <wdgvip@gmail.com>
#
#############################################################################

CROSS	=	
#CROSS	=	arm-linux-
CC	=	$(CROSS)gcc
CXX	=	$(CROSS)g++
LD	=	$(CROSS)ld
OBJCOPY =	$(CROSS)objcopy
OBJDUMP =	$(CROSS)objdump

CFLAGS	=	 -Wall -o
CXXFLAGS=	 -Wall -o
LDFLAGS =	
DUMFLAGS=
INCPATH	=	-I. -I ./inc #-I./include		
LDFLAGS	=	
LIB	= 	-lpthread  -lc
LIB_INC = 	-L.  #-L./ComuServ -L./DvrExe/lib/hi3511

OBJ1	= 	./src/com/com_test.o  ./src/com/Com.o
OBJ2	=
OBJ3	=	
OBJLIB	=	#xxx.o  yyyy.o
OBJS	=	$(OBJ1) $(OBJ2) $(OBJ3) $(OBJLIB)

EXEC1	=	./com_test
EXEC2	=
EXEC3	= 
EXELIB	=	#libtest.so
EXECS	=	$(EXEC1) $(EXEC2) $(EXEC3) $(EXELIB) 


all:$(EXECS)

$(EXEC1):$(EXELIB) $(OBJ1) 
	$(CXX)	$(LDFLAGS) $(CXXFLAGS) $@ $^ $(LIB) $(LIB_INC)
$(EXEC2):$(EXELIB) $(OBJ2)
	$(CXX)	$(LDFLAGS) $(CXXFLAGS) $@ $^ $(LIB) $(LIB_INC)
$(EXEC3):$(EXELIB)$(OBJ3)
	$(CXX)	$(LDFLAGS) $(CXXFLAGS) $@ $^ $(LIB) $(LIB_INC)
$(EXELIB):$(OBJLIB)
	$(CXX)  -shared -o $@ $^ -lc
 
$(OBJ1):%.o:%.cpp
	$(CXX) -c -o $@ $<
$(OBJ2):%.o:%.cpp
	$(CXX) -c -o $@ $<
$(OBJ3):%.o:%.cpp
	$(CXX) -c -o $@ $<
$(OBJLIB):%.o:%.cpp
	$(CXX) -c -fPIC -Wall -o $@ $<


.PHONY:clean
clean:
	-rm -f $(EXECS) $(OBJS) 
	-rm -f *~ core *elf *.gdb *.dis *.bin

