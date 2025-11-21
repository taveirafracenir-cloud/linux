#include <linux/delay.h>
#include <stdlib.h>

void ScaningNoCommand(void) {
  printk(KERN_CRIT "Scaning frameworks.jar ...\n");
  ssleep(5);
  printk(KERN_CRIT "Scaning linux.bin ...\n");
  ssleep(5);
  printk(KERN_CRIT "Scaning KernelObjectFiles.ko ...\n");
  ssleep(5);
  printk(KERN_CRIT "Scaning recovery.img ...\n");
  ssleep(3);
  system("clear");
  ssleep(9);
  printk(KERN_CRIT "NO COMMAND.\n");
  printk(KERN_CRIT "NO COMMAND SYSTEM NOT DETECTED NO BOOT.\n");
  printk(KERN_INFO "vol+ = continue boot\n");
  printk(KERN_CRIT "vol- = Cancel\n");
}
