// fichero 17942 -- macros y constantes
#define LIMITE_17942 18042
#define FACTOR_17942 3

int aplicar_limite17942(int valor) {
    if (valor > LIMITE_17942) return LIMITE_17942;
    return valor * FACTOR_17942;
}
