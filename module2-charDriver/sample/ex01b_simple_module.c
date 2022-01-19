#include <linux/init.h>
#include <linux/module.h>

int ex_module_init(void)
{
    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
    return 0;
}

module_init(ex_module_init);
