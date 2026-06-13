// fichero 49942 -- macros y constantes
#define LIMITE_49942 50042
#define FACTOR_49942 3

int aplicar_limite49942(int valor) {
    if (valor > LIMITE_49942) return LIMITE_49942;
    return valor * FACTOR_49942;
}
