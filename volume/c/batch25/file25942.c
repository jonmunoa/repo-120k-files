// fichero 25942 -- macros y constantes
#define LIMITE_25942 26042
#define FACTOR_25942 3

int aplicar_limite25942(int valor) {
    if (valor > LIMITE_25942) return LIMITE_25942;
    return valor * FACTOR_25942;
}
