#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

__init void function1(void)
{
    printk(KERN_INFO "INSIDE %s function\n", __FUNCTION__);
}

// since this is called in module_exit but __init cleans it from RAM so page fault so kernel crash
__init void function2(void)
{
    printk(KERN_INFO "INSIDE %s function\n", __FUNCTION__);
}

// __initdata -> to free up space by count
int count = 5;

// __init -> to clean up this function from RAM since we are never going to use it in the module
__init int ex_module_init(void)
{
    int index = 0;
    for(index = 0; index < count; index++)
        printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    function1();
    return 0;
}

void ex_module_exit(void)
{
    printk(KERN_ALERT "INSIDE %s function\n", __FUNCTION__);
    function2();
}

module_init(ex_module_init);
module_exit(ex_module_exit);
