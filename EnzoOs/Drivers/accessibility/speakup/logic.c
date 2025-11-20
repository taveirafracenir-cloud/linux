#include "logic.h"
#include <linux/kernel.h>
#include <linux/printk.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init speakup_init(void)
{
    speakup_say("Inicializando suporte de fala do EnzoOS...");
    speakup_say("Carregando sintetizador de voz padrão...");
    speakup_say("Speakup pronto para uso.");

    return 0;
}

module_init(speakup_init);

/* Função de erro / aviso */
void speakup_error(void)
{
#if SPEAKUP_DEBUG
    printk(KERN_ERR "[Speakup] ERRO: Falha ao carregar speakup/logic.c\n");
#else
    printk(KERN_WARNING "[Speakup] WARNING: Inicialização concluída com avisos.\n");
#endif
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("EnzoOS Accessibility - Speakup Driver");
MODULE_AUTHOR("EnzoOS Team");
