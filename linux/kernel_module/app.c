#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[ ])
{
    int fd;
    int rv = 0;
    char buf[20];
    int choice;
   // unsigned int command = atoi(argv[1]);
	unsigned int command;
	fd=open("scull",O_RDWR);
	if(fd == -1) {
		printf("Error in opening file\n");
		exit(0);
	}
	while(1) {
		printf("1. WRITE\n2. READ\n3. Exit\n\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
       				 write(fd,"prashant",10);
				 break;
			case 2:
				read(fd, buf,10);
				printf("buf = %s\n",buf);
				break;
			case 3:
				exit(1);	
       		}
	}	
        close(fd);
    return 0;
}
