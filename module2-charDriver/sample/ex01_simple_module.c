#include <linux/init.h>
#include <linux/module.h>

int ex_module_init(void)
{
    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
    return 0;
}

void ex_module_exit(void)
{
    printk(KERN_ALERT "========INSIDE %s function==========\n", __FUNCTION__);
}

module_init(ex_module_init);
module_exit(ex_module_exit);
