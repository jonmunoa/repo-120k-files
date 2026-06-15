// fichero 32438 -- macros y constantes -- MODIFICADO
#define LIMITE_32438 32638
#define FACTOR_32438 5

int aplicar_limite32438(int valor) {
    if (valor > LIMITE_32438) return LIMITE_32438;
    return valor * FACTOR_32438;
}
