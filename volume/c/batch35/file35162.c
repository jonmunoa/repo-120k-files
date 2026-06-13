// fichero 35162 -- macros y constantes
#define LIMITE_35162 35262
#define FACTOR_35162 3

int aplicar_limite35162(int valor) {
    if (valor > LIMITE_35162) return LIMITE_35162;
    return valor * FACTOR_35162;
}
