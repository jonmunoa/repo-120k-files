// fichero 18942 -- macros y constantes
#define LIMITE_18942 19042
#define FACTOR_18942 3

int aplicar_limite18942(int valor) {
    if (valor > LIMITE_18942) return LIMITE_18942;
    return valor * FACTOR_18942;
}
