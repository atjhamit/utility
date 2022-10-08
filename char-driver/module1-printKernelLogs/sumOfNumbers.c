#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/sched.h>
#include <linux/time.h>

int init_module(void)
{
    int p;
    int num1 = 3;
    int num2 = 4;
    printk(KERN_INFO "Sum of 3 and 4 is : %d\n", num1 + num2);
    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "BYE\n");
}
