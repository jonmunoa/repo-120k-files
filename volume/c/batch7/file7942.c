// fichero 7942 -- macros y constantes
#define LIMITE_7942 8042
#define FACTOR_7942 3

int aplicar_limite7942(int valor) {
    if (valor > LIMITE_7942) return LIMITE_7942;
    return valor * FACTOR_7942;
}
