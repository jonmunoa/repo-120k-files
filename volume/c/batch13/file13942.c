// fichero 13942 -- macros y constantes
#define LIMITE_13942 14042
#define FACTOR_13942 3

int aplicar_limite13942(int valor) {
    if (valor > LIMITE_13942) return LIMITE_13942;
    return valor * FACTOR_13942;
}
