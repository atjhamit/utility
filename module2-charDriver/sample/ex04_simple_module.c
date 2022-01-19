#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

// __initdata -> to free up space by count
int count = 5;


// __init -> to clean up this function from RAM since we are never going to use it in the module
__init int ex_module_init(void)
{
    int index = 0;
    for(index = 0; index < count; index++)
        printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    return 0;
}

void ex_module_exit(void)
{
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
}

module_init(ex_module_init);
module_exit(ex_module_exit);
