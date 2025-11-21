#include <linux/kernel.h>
#include <linux/printk.h>

void NoSystemFound(void) {
printk(KERN_CRIT "No OS found!\n");
printk(KERN_CRIT "Partition linux/EnzoOs is empty or corrupted.\n");
printk(KERN_CRIT "Boot cannot continue.\n");
printk(KERN_CRIT "Reboot to bootloader to repair \n");
}
