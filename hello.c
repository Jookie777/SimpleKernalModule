#include<linux/module.h>
#include<linux/init.h>

static int __init hello_init(void) {
  printk(KERN_INFO "Hello World\n");
  return 0;
}

static void __exit hello_exit(void) {
  printk(KERN_INFO "Goodbye!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Jonus Li");
MODULE_VERSION("V1.0");
