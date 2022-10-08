#include <linux/module.h>
#include <linux/init.h>
#include <linux/moduleparam.h>

#include <linux/fs.h> // for the character driver support

#define PK printk(KERN_INFO "function : %s\n", __FUNCTION__);

MODULE_LICENSE("GPL");

// define file opeations
int amit_open(struct inode *pinode, struct file *pfile)
{
    PK;
    return 0; 
}

ssize_t amit_read(struct file *pfile, char __user *buffer, size_t length, loff_t *offset)
{
    PK;
    return 0;
}

ssize_t amit_write(struct file *pfile, const char __user *buffer, size_t length, loff_t *offset)
{
    PK;
    return length;
}

int amit_close(struct inode *pnode, struct file *pfile)
{
    PK;
    return 0;
}

// for file operations for the character driver
struct file_operations amit_file_operations = 
{
    .owner   = THIS_MODULE,
    .open    = amit_open,
    .read    = amit_read,
    .write   = amit_write,
    .release = amit_close
};

__init int init_func(void)
{
    PK;
    // register character type driver with the kernel
    register_chrdev(301,"Amit Character Driver", &amit_file_operations);

    return 0;
}

void exit_func(void)
{
    PK;
    // unregister character type driver with the kernel
    unregister_chrdev(301, "Amit Character Driver");
}

module_init(init_func);
module_exit(exit_func);

// to make node
// sudo mknod -m 666 /dev/char_dev_301 c 301 11
