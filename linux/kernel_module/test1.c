#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/moduleparam.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include "head.h"

/*
#define  OK      0
#define  ERROR  -1
*/
#define  MODULENAME   "scull"
#define  DEVICENUM    1
#define  MINORNUM     0

//static char *whom = NULL;
//static int howmany = 0;
static struct cdev *scull_cdev;
static dev_t dev;
static char kbuf[20]="chikhalkar"; 

MODULE_LICENSE("Dual BSD/GPL");
int my_open(struct inode *inode,struct file *filp)
{
    printk("open successful\n");
    return 0;
}

ssize_t my_write(struct file *filp,const  char*ubuf,size_t size,loff_t *off)
{
	printk("in my_write\n");
//	down(&name);
	if(copy_from_user(kbuf,ubuf,size))
	{
		printk("read error\n");
		return 0;
	}
	printk("kbuf=%s ubuf=%s\n",kbuf,ubuf);
	return size;
//	up(&name);
}

ssize_t my_read(struct file *filp ,char *ubuf, size_t size,loff_t*off)
{
	
	printk("in my read\n");
//	up(&name);
	if(copy_to_user(ubuf,kbuf,size))
	{
		printk("read error\n");
		return -EFAULT;
	}
	printk("kbuf= %s ubuf=%s \n",kbuf,ubuf);
	return size;
//	up(&name);
/*	int byte_read=0;
        if(*msg==0)
                return 0;
        while(size && *msg)
        {

                put_user(*(msg++) ,ubuf++);KE

                size--;
+              byte_read++;
        }
      printk("buf =%s\n",ubuf);

        return byte_read++;*/

}


int my_close(struct inode *ind,struct file *filp)
{
	printk("in my close\n");
	return 0;
}

char ch;
int my_ioctl(struct file*filp,unsigned int cmd,unsigned long arg)
{
		printk("In my IOctl\n");
		int ret;
		
		char*temp=(char*)arg;
		int i;
		printk(" in my ioctl\n");
		printk("cmd=%u\n",cmd);
		switch(cmd)
		{
			case _IOR(249,0,char*): 
				printk("ok\n");
			//	ret=get_user(ch,temp);
			//	printk("ch=%c\n",ch);
			//	printk("ret=%d\n",ret);
				for (i = 0; ch != '\0'; i++, temp++)
				get_user(ch, temp);

				my_write(filp,(char*)arg,i,0);
				break;
				
				
       			case _IOR(249,1,char*):
				printk("in write\n");
				i=my_read(filp,(char*)arg,20,0);
				put_user('\0',(char*)arg+i);
			
				
				break;
		}
		return 0;
}
struct file_operations scull_fops = {
    open 	:my_open,
    release	:my_close,
    owner	:THIS_MODULE, 
    read	:my_read,
    write	:my_write, 
    unlocked_ioctl : my_ioctl
};  

static int hello_init(void)
{
    int scull_major = 0;
    int result = 0;

    printk( "Welcome, In init!\n");

    scull_cdev = cdev_alloc();
    if (scull_cdev ==  NULL)
    {
        return -1;
    }
    result = alloc_chrdev_region(&dev, MINORNUM, DEVICENUM, MODULENAME);
    scull_major = MAJOR(dev);

   if (result < 0) {
       printk(KERN_WARNING "scull: can't get major %d\n", scull_major);
       return result;
   }else
   {
       printk("major = %d\n", scull_major);
   }

   cdev_init(scull_cdev, &scull_fops);
   scull_cdev->ops = &scull_fops;

   cdev_add(scull_cdev, dev, 1);
   return 0;
}

static void hello_exit(void)
{
    unregister_chrdev_region(dev, DEVICENUM); 
    cdev_del(scull_cdev);
    printk( "Goodbye\n");
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("PRASHANT");
