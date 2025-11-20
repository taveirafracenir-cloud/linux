#pragma once

#include "logic.h"

/*
 * Header oficial do módulo Speakup do EnzoOS.
 * Aqui ficam todos os protótipos das funções de voz,
 * separados por idioma e categoria.
 */

/* -----------------------------
 *  Seleção de idiomas
 * ----------------------------- */

enum enzo_speakup_lang {
    LANG_PT_BR = 0,
    LANG_EN_US = 1,
    LANG_ES_MX = 2,     /* você pode adicionar espanhol depois */
};

/*
 * Função para selecionar idioma no futuro.
 * (implementação fica opcional no logic.c ou Speaker.c)
 */
void speakup_set_language(enum enzo_speakup_lang lang);


/* -----------------------------
 *  Português (Brasil)
 * ----------------------------- */

void speakers_pt_br(void);
void speakers_pt_br_system(void);
void speakers_pt_br_assistant(void);
void speakers_pt_br_security(void);


/* -----------------------------
 *  Inglês (EUA)
 * ----------------------------- */

void speakers_en_us(void);


/* (Opcional futuramente) Espanhol, Francês, Japonês... */
/* void speakers_es_mx(void); */
/* void speakers_ja_jp(void); */
