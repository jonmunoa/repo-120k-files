// fichero 38378 -- macros y constantes
#define LIMITE_38378 38478
#define FACTOR_38378 4

int aplicar_limite38378(int valor) {
    if (valor > LIMITE_38378) return LIMITE_38378;
    return valor * FACTOR_38378;
}
