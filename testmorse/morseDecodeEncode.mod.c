#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0xd9726f80, "module_layout" },
	{ 0xc5645b17, "class_unregister" },
	{ 0xe340d421, "device_destroy" },
	{ 0x64b60eb0, "class_destroy" },
	{ 0x9f4f34bc, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa946dcde, "__class_create" },
	{ 0x4102c7cb, "__register_chrdev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcf2a6966, "up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6626afca, "down" },
	{ 0x1000e51, "schedule" },
	{ 0x69af1880, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x900e7721, "vc_cons" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xc487a0a7, "commit_creds" },
	{ 0x682bcc68, "prepare_creds" },
	{ 0xe271efb4, "try_module_get" },
	{ 0x50f6845f, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D90986E516754DC70BDA145");
