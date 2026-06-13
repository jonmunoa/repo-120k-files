// fichero 51942 -- macros y constantes
#define LIMITE_51942 52042
#define FACTOR_51942 3

int aplicar_limite51942(int valor) {
    if (valor > LIMITE_51942) return LIMITE_51942;
    return valor * FACTOR_51942;
}
