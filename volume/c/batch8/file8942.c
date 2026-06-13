// fichero 8942 -- macros y constantes
#define LIMITE_8942 9042
#define FACTOR_8942 3

int aplicar_limite8942(int valor) {
    if (valor > LIMITE_8942) return LIMITE_8942;
    return valor * FACTOR_8942;
}
