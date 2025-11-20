#pragma once

#include <linux/printk.h>

#define linux_enzoos_braile_letter(x) printk("Letra braille registrada: %s\n", x)
#define linux_enzoos_braile_number(x) printk("Número braille registrado: %s\n", x)
