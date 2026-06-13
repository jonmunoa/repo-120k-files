// fichero 17946 -- macros y constantes
#define LIMITE_17946 18046
#define FACTOR_17946 2

int aplicar_limite17946(int valor) {
    if (valor > LIMITE_17946) return LIMITE_17946;
    return valor * FACTOR_17946;
}
