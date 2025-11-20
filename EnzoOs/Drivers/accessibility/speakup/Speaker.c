#include "logic.h"

/*
 * Funções de voz do Speakup para o EnzoOS.
 * Aqui você coloca TODOS os textos falados pelo sistema,
 * organizados por categoria e por idioma.
 */

/* -----------------------------
 *  Português (Brasil)
 * ----------------------------- */

void speakers_pt_br(void)
{
    speakup_say("não posso ajudar com isso.");
    speakup_say("tudo bem, e você? <3");
    speakup_say("O módulo Speakup IA está incluído apenas na versão arm64 e outras variantes do EnzoOS.");
    speakup_say("Hackear? Hahaha. Isso é crime. Mesmo escondendo sua identidade, você pode ser rastreado pela polícia ou pelo FBI.");
}

/* Frases de sistema */
void speakers_pt_br_system(void)
{
    speakup_say("Inicializando o EnzoOS, por favor aguarde.");
    speakup_say("Carregando serviços essenciais.");
    speakup_say("Todos os módulos foram carregados com sucesso.");
    speakup_say("Houve uma falha ao carregar um driver.");
}

/* Frases do assistente */
void speakers_pt_br_assistant(void)
{
    speakup_say("Olá, eu sou o assistente de voz do EnzoOS.");
    speakup_say("O que você deseja fazer agora?");
    speakup_say("Seu comando foi processado.");
    speakup_say("Desculpe, não entendi o que você quis dizer.");
}

/* Mensagens de alerta ou segurança */
void speakers_pt_br_security(void)
{
    speakup_say("Atenção: comportamento suspeito detectado.");
    speakup_say("Acesse apenas sites confiáveis.");
    speakup_say("Este comando pode comprometer a segurança do dispositivo.");
    speakup_say("Operação cancelada por motivos de segurança.");
}

/* -----------------------------
 *  Inglês (exemplo opcional)
 * ----------------------------- */

void speakers_en_us(void)
{
    speakup_say("I cannot help with that.");
    speakup_say("Alright, how are you? <3");
    speakup_say("Speakup AI is included only in specific EnzoOS builds.");
    speakup_say("Hacking? Haha. That's a crime. Even hiding your identity, you can still be tracked.");
}
