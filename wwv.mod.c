#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x17300f3a, "module_layout" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa836db36, "class_destroy" },
	{ 0xe6ff264b, "device_destroy" },
	{ 0x62686042, "device_create" },
	{ 0xe609c355, "__class_create" },
	{ 0x89daedb, "__register_chrdev" },
	{ 0xe411376b, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5f754e5a, "memset" },
	{ 0x96de1846, "kmem_cache_alloc_trace" },
	{ 0xe04a6c96, "kmalloc_caches" },
	{ 0x91a7c060, "gpiod_set_raw_value" },
	{ 0x76fad4ec, "gpio_to_desc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2895C83681F70D69E14C7C2");
