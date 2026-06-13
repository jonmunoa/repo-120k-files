// fichero 10946 -- macros y constantes
#define LIMITE_10946 11046
#define FACTOR_10946 2

int aplicar_limite10946(int valor) {
    if (valor > LIMITE_10946) return LIMITE_10946;
    return valor * FACTOR_10946;
}
