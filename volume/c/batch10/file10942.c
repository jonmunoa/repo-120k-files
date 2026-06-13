// fichero 10942 -- macros y constantes
#define LIMITE_10942 11042
#define FACTOR_10942 3

int aplicar_limite10942(int valor) {
    if (valor > LIMITE_10942) return LIMITE_10942;
    return valor * FACTOR_10942;
}
