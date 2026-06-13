// fichero 28942 -- macros y constantes
#define LIMITE_28942 29042
#define FACTOR_28942 3

int aplicar_limite28942(int valor) {
    if (valor > LIMITE_28942) return LIMITE_28942;
    return valor * FACTOR_28942;
}
