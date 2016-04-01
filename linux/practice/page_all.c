#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/gfp.h>


static unsigned long *addr,*addr1;
static unsigned long *phy_addr,*phy_addr1;

static int page_allin(void)
{


	addr = __get_free_pages(GFP_KERNEL,2);
	if(!addr)
		printk("Insufficent memory addr\n");
	else
		printk("memory allocated successfully addr\n");
	printk("virtual address: %p \n",addr);

/*	phy_addr = virt_to_phys(addr);
	printk("Physical address: %p \n",phy_addr);


	addr1 = __get_free_pages(GFP_KERNEL,2);
	if(!addr1)
		printk("Insufficent memory addr1\n");
	else
		printk("Memory allocated successfully addr1\n");
*/	

	return 0;
}


static void page_allex(void)
{

	if(!addr)
		printk("No memory allocated \n");
	else
		free_pages(addr,2);
/*	free_pages(addr1,2);*/

	return;

}


module_init(page_allin);
module_exit(page_allex);

//MODULE_LICENSE("GPL");
