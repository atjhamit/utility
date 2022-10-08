#include <linux/init.h>
#include <linux/module.h>


void ex_module_exit(void)
{
    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
}

module_exit(ex_module_exit);
