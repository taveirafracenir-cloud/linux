#include "main.h"

// Função principal do kernel minimalista
void kernel_main(void) {
    // Exemplo: piscar LED do PC Speaker (porta 0x61)
    while (1) {
        u8 val = inb(0x61);
        outb(0x61, val ^ 0x02); // alterna bit 1
        for (volatile u32 i = 0; i < 1000000; i++); // delay
    }
}
