
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m := hello.o

all:
	make -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.o *~ *.ko *.mod.c *.mod *.order *.symvers  
