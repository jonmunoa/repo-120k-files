// fichero 45942 -- macros y constantes
#define LIMITE_45942 46042
#define FACTOR_45942 3

int aplicar_limite45942(int valor) {
    if (valor > LIMITE_45942) return LIMITE_45942;
    return valor * FACTOR_45942;
}
