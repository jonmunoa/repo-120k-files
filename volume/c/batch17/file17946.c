// fichero 17946 -- macros y constantes -- MODIFICADO
#define LIMITE_17946 18146
#define FACTOR_17946 3

int aplicar_limite17946(int valor) {
    if (valor > LIMITE_17946) return LIMITE_17946;
    return valor * FACTOR_17946;
}
