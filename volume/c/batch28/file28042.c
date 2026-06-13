// fichero 28042 -- macros y constantes
#define LIMITE_28042 28142
#define FACTOR_28042 3

int aplicar_limite28042(int valor) {
    if (valor > LIMITE_28042) return LIMITE_28042;
    return valor * FACTOR_28042;
}
