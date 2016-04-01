#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
//#include<uaccess.h>
#include<sys/ioctl.h>
#include<stdlib.h>
#include "head.h"
//#include"my_ioctl.h"

//#define MAJOR_NO 248
/*
#define DN_SETCOUNT _IOR(250,0,char*);
#define IOCTL_GET_MSG _IOR(250,1,char*);
//#define IOCTL_GET_MSG _IOR(MAJOR_NO,1,char*);
//#define IOCTL_NT_BIT _IOWR(MAJOR_NO,2,char*);
*/
int ioctl_set_msg(int,char*);
int ioctl_get_msg(int);

int main(int argc ,char*argv[])
{
	int fd;
//	int ret;
	char*msg;
	int choice;
	int ret1;
	int ret;
	fd=open(argv[1],O_RDWR|O_CREAT,0666);
	if(fd==-1)
	{
		perror(" ");
		exit(1);
	}
//	ioctl(fd, IOCTL_SET_MSG,"vishnu");

//	ret=ioctl(fd,IOCTL_SET,msg);
//	printf("IOCTL_SET_MSG=%d\n",DN_SETCOUNT);
	printf("1.WRITE\t 2.READ\t 3. EXIT\n");
	while(1)
	{
	printf("enter choice\n");
	scanf("%d",&choice);
	__fpurge(stdin);;
	switch(choice)
	{
		case 1:
			printf("in user write\n");
			ioctl(fd,IOCTL_SET_MSG,"prashant");
			if(ret==-1)
			{
				perror(" ");
				exit(2);
			}
			
			break;
		case 2:
			printf("in user read\n");
			ret1=ioctl_get_msg(fd);
			if(ret1==-1)
			{
				perror(" ");
				exit(1);
			}
			break;
		case 3:
			exit(1);
	}
	
}
			
}
int ioctl_set_msg(int file_desc, char*j)
{
	//j=5;
	int ret_val;
	ret_val = ioctl(file_desc,_IOR(249,0,int),j);

	if (ret_val < 0) 
	{
		printf("ioctl_set_msg failed:%d\n", ret_val);
//	exit(−1);
	}
}
int ioctl_get_msg(int file_desc)
{
	int ret_val;
	char message[100];

	ret_val = ioctl(file_desc, _IOR(249,1,char*), message);
	if (ret_val < 0) {
	printf("ioctl_get_msg failed:%d\n", ret_val);
	//exit(−1);
}
	
	printf("message=%s\n",message);
}

