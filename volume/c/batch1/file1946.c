// fichero 1946 -- macros y constantes
#define LIMITE_1946 2046
#define FACTOR_1946 2

int aplicar_limite1946(int valor) {
    if (valor > LIMITE_1946) return LIMITE_1946;
    return valor * FACTOR_1946;
}
