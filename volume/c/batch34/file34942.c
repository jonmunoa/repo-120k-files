// fichero 34942 -- macros y constantes
#define LIMITE_34942 35042
#define FACTOR_34942 3

int aplicar_limite34942(int valor) {
    if (valor > LIMITE_34942) return LIMITE_34942;
    return valor * FACTOR_34942;
}
