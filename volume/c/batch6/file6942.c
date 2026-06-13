// fichero 6942 -- macros y constantes
#define LIMITE_6942 7042
#define FACTOR_6942 3

int aplicar_limite6942(int valor) {
    if (valor > LIMITE_6942) return LIMITE_6942;
    return valor * FACTOR_6942;
}
