
#define MAJOR_NO 249

#define IOCTL_SET_MSG _IOR(MAJOR_NO ,0,int*)
#define IOCTL_GET_MSG _IOW(MAJOR_NO ,1,char*)
#define IOCTL_NTH_BIT _IOWR(MAJOR_NO ,2,int)
