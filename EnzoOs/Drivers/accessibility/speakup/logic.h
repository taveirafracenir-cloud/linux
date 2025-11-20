#pragma once

#include <linux/printk.h>

#define speakup_say(x) printk(KERN_INFO "[Speakup] Dizendo: %s\n", x)

/* Se você quiser debug extra */
#define SPEAKUP_DEBUG 1

void speakup_error(void);
