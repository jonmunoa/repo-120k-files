// fichero 32338 -- macros y constantes
#define LIMITE_32338 32438
#define FACTOR_32338 4

int aplicar_limite32338(int valor) {
    if (valor > LIMITE_32338) return LIMITE_32338;
    return valor * FACTOR_32338;
}
