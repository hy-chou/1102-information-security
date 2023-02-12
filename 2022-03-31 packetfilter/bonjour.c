#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static char *name = "samuel";

static int __init bonjour_init(void)
{
	pr_info("Bonjour, %s !\n", name);
	return (0);
}

static void __exit bonjour_exit(void)
{
	pr_info("Au revoir, %s.\n", name);
	return;
}

module_init(bonjour_init);
module_exit(bonjour_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("samuel");
MODULE_DESCRIPTION("bonjour kernel module");
