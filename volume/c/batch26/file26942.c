// fichero 26942 -- macros y constantes
#define LIMITE_26942 27042
#define FACTOR_26942 3

int aplicar_limite26942(int valor) {
    if (valor > LIMITE_26942) return LIMITE_26942;
    return valor * FACTOR_26942;
}
