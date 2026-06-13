// fichero 5942 -- macros y constantes
#define LIMITE_5942 6042
#define FACTOR_5942 3

int aplicar_limite5942(int valor) {
    if (valor > LIMITE_5942) return LIMITE_5942;
    return valor * FACTOR_5942;
}
