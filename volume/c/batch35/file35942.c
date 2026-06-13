// fichero 35942 -- macros y constantes
#define LIMITE_35942 36042
#define FACTOR_35942 3

int aplicar_limite35942(int valor) {
    if (valor > LIMITE_35942) return LIMITE_35942;
    return valor * FACTOR_35942;
}
