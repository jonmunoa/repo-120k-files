// fichero 942 -- macros y constantes
#define LIMITE_942 1042
#define FACTOR_942 3

int aplicar_limite942(int valor) {
    if (valor > LIMITE_942) return LIMITE_942;
    return valor * FACTOR_942;
}
