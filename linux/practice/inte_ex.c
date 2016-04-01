#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/interrupt.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

irqreturn_t lnt_key_handler(int , void *);
irqreturn_t lnt_key_handler(int irq, void *dev_id)
{
	printk("Lnt key pressed \n");
	return IRQ_HANDLED;
}

static int intr_in(void)
{
	 int result;
	  /* Request IRQ 1, the keyboard IRQ */    
 result = request_irq (41, lnt_key_handler, IRQF_SHARED, "keyboard_stats_irq", (void *)(lnt_key_handler));

	  if (result)
		    printk(KERN_INFO "can't get shared interrupt for keyboard\n");

  return result;
}

static void intr_ex(void)
{
	free_irq(41, (void *)(lnt_key_handler)); 
	return;
}


module_init(intr_in);
module_exit(intr_ex);
