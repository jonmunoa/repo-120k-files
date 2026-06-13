// fichero 31942 -- macros y constantes
#define LIMITE_31942 32042
#define FACTOR_31942 3

int aplicar_limite31942(int valor) {
    if (valor > LIMITE_31942) return LIMITE_31942;
    return valor * FACTOR_31942;
}
