// fichero 14766 -- macros y constantes
#define LIMITE_14766 14866
#define FACTOR_14766 2

int aplicar_limite14766(int valor) {
    if (valor > LIMITE_14766) return LIMITE_14766;
    return valor * FACTOR_14766;
}
