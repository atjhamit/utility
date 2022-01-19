#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int ex05_simple_module_function(void);

int ex_module_init(void)
{
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    ex05_simple_module_function();
    return 0;
}

void ex_module_exit(void)
{
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
}

module_init(ex_module_init);
module_exit(ex_module_exit);
