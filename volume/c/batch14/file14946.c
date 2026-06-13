// fichero 14946 -- macros y constantes
#define LIMITE_14946 15046
#define FACTOR_14946 2

int aplicar_limite14946(int valor) {
    if (valor > LIMITE_14946) return LIMITE_14946;
    return valor * FACTOR_14946;
}
