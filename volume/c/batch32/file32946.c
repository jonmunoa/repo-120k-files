// fichero 32946 -- macros y constantes
#define LIMITE_32946 33046
#define FACTOR_32946 2

int aplicar_limite32946(int valor) {
    if (valor > LIMITE_32946) return LIMITE_32946;
    return valor * FACTOR_32946;
}
