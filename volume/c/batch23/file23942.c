// fichero 23942 -- macros y constantes
#define LIMITE_23942 24042
#define FACTOR_23942 3

int aplicar_limite23942(int valor) {
    if (valor > LIMITE_23942) return LIMITE_23942;
    return valor * FACTOR_23942;
}
