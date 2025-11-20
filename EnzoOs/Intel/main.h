#ifndef ENZOOS_INTEL_MAIN_H
#define ENZOOS_INTEL_MAIN_H

#include <stdint.h>

// Tipos básicos
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// Funções essenciais
static inline void outb(u16 port, u8 val) {
    __asm__ volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

static inline u8 inb(u16 port) {
    u8 ret;
    __asm__ volatile ("inb %1, %0" : "=a"(ret) : "Nd"(port));
    return ret;
}

#endif // ENZOOS_INTEL_MAIN_H
