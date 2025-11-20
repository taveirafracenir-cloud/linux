#include <logic.h>
#include <linux/kernel.h>
#include <linux/printk.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init braille_init(void)
{
    linux_enzoos_braile_letter("Qq");
    linux_enzoos_braile_letter("Ww");
    linux_enzoos_braile_letter("Ee");
    linux_enzoos_braile_letter("Rr");
    linux_enzoos_braile_letter("Tt");
    linux_enzoos_braile_letter("Yy");
    linux_enzoos_braile_letter("Uu");
    linux_enzoos_braile_letter("Ii");
    linux_enzoos_braile_letter("Oo");
    linux_enzoos_braile_letter("Pp");
    linux_enzoos_braile_letter("Aa");
    linux_enzoos_braile_letter("Ss");
    linux_enzoos_braile_letter("Dd");
    linux_enzoos_braile_letter("Ff");
    linux_enzoos_braile_letter("Gg");
    linux_enzoos_braile_letter("Hh");
    linux_enzoos_braile_letter("Jj");
    linux_enzoos_braile_letter("Kk");
    linux_enzoos_braile_letter("Ll");
    linux_enzoos_braile_letter("Zz");
    linux_enzoos_braile_letter("Xx");
    linux_enzoos_braile_letter("Cc");
    linux_enzoos_braile_letter("Vv");
    linux_enzoos_braile_letter("Bb");
    linux_enzoos_braile_letter("Nn");
    linux_enzoos_braile_letter("Mm");

    linux_enzoos_braile_number("1");
    linux_enzoos_braile_number("2");
    linux_enzoos_braile_number("3");
    linux_enzoos_braile_number("4");
    linux_enzoos_braile_number("5");
    linux_enzoos_braile_number("6");
    linux_enzoos_braile_number("7");
    linux_enzoos_braile_number("8");
    linux_enzoos_braile_number("9");
    linux_enzoos_braile_number("0");

    return 0;
}

module_init(braille_init);
MODULE_LICENSE("GPL");
void braile_error(void)
{
#if BRAILLE_DEBUG
    printk(KERN_ERR "ERROR: FALHA A CARREGAR .../logic.c\n");
#else
    printk(KERN_WARNING "WARNING: SUCESSO INICIANDO BRAILLE...\n");
#endif
}
