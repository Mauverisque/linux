#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

static int __init init(void) {
	printk(KERN_INFO, "Hello world!\n");
	return 0;
}

static void __exit exit(void) {
	printk(KERN_INFO, "Bye World!\n");
}


module_init(init);
module_exit(exit);