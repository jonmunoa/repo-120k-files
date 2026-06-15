// fichero 35162 -- macros y constantes -- MODIFICADO
#define LIMITE_35162 35362
#define FACTOR_35162 4

int aplicar_limite35162(int valor) {
    if (valor > LIMITE_35162) return LIMITE_35162;
    return valor * FACTOR_35162;
}
