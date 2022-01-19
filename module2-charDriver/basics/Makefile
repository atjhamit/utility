obj-m := ex01_simple_module.o

obj-m := ex01ab_simple_module.o
ex01ab_simple_module-objs := ex01a_simple_module.o ex01b_simple_module.o

#obj-m := ex01_simple_module.o
obj-m := ex04_simple_module.o

obj-m := pageFault_crashKernel.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
