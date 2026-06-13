// fichero 4942 -- macros y constantes
#define LIMITE_4942 5042
#define FACTOR_4942 3

int aplicar_limite4942(int valor) {
    if (valor > LIMITE_4942) return LIMITE_4942;
    return valor * FACTOR_4942;
}
