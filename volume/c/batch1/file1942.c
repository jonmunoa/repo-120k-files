// fichero 1942 -- macros y constantes
#define LIMITE_1942 2042
#define FACTOR_1942 3

int aplicar_limite1942(int valor) {
    if (valor > LIMITE_1942) return LIMITE_1942;
    return valor * FACTOR_1942;
}
