#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/slab.h>




static struct kmem_cache *cache_ex;

static struct example {
	char a[20];
	short b[20];
	unsigned int c[10];
	unsigned long d[20];
};

struct example ex, *p;

static int slab_in(void)
{
	
	printk("size of structure: %d",sizeof(struct example));

	cache_ex = kmem_cache_create("lnt_cache",sizeof(struct example),__alignof__(struct example),NULL,NULL);
	if(!cache_ex)
		printk("Error while creating cache \n");


/*	p=kmem_cache_alloc(cache_ex,GFP_KERNEL);
	if(!p)
		printk("Error while allocating cache \n");*/


	return 0;
}

static void slab_ex(void)
{
	printk("destroying the cache \n");


/*	kmem_cache_free(cache_ex,p);*/

	kmem_cache_destroy(cache_ex);


	return;
}

module_init(slab_in);
module_exit(slab_ex);

