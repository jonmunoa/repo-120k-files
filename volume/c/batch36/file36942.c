// fichero 36942 -- macros y constantes
#define LIMITE_36942 37042
#define FACTOR_36942 3

int aplicar_limite36942(int valor) {
    if (valor > LIMITE_36942) return LIMITE_36942;
    return valor * FACTOR_36942;
}
