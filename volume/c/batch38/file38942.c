// fichero 38942 -- macros y constantes
#define LIMITE_38942 39042
#define FACTOR_38942 3

int aplicar_limite38942(int valor) {
    if (valor > LIMITE_38942) return LIMITE_38942;
    return valor * FACTOR_38942;
}
