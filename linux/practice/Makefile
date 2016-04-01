
#obj-m := page_all.o
#obj-m := slab_ex.o
obj-m := inte_ex.o

SRC	= /lib/modules/$(shell uname -r)/build
all:
	$(MAKE) -C $(SRC) M=$(PWD) modules


clean:
	rm -rf *.ko *.o Module.symvers modules.order *.mod.c  .*.cmd
