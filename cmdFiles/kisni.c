// kisni.c
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init kisni_init(void) {
    printk(KERN_INFO "kisni module loaded\n");
    return 0;
}

static void __exit kisni_exit(void) {
    printk(KERN_INFO "kisni module unloaded\n");
}

module_init(kisni_init);
module_exit(kisni_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Potixt");
MODULE_DESCRIPTION("Modulo para ejecucion de malware");

