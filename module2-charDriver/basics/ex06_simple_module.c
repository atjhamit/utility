#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPL");

int count = 1;
// count value added to file -> /sys/module/ex06_simple_module/parameters/count
module_param(count, int, 0);

int ex_module_init(void)
{
    int index = 0;
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    for(index = 0; index < count; index++)
	printk(KERN_INFO "%s : count : %d", __FUNCTION__,index);
    return 0;
}

void ex_module_exit(void)
{
    int index = 0;
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    for(index = 0; index < count; index++)
	printk(KERN_INFO "%s : count : %d", __FUNCTION__,index);
}

module_init(ex_module_init);
module_exit(ex_module_exit);
