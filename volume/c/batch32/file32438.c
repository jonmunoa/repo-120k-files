// fichero 32438 -- macros y constantes
#define LIMITE_32438 32538
#define FACTOR_32438 4

int aplicar_limite32438(int valor) {
    if (valor > LIMITE_32438) return LIMITE_32438;
    return valor * FACTOR_32438;
}
