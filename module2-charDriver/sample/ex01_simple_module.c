#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int ex_module_init(void)
{
    int arr[100] = {0};
    int i;
    for(i = 0; i < 100; i++)
	printk(KERN_INFO "hey\n");

    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
    return 0;
}

void ex_module_exit(void)
{
    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
}

module_init(ex_module_init);
module_exit(ex_module_exit);
