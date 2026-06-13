// fichero 4586 -- macros y constantes
#define LIMITE_4586 4686
#define FACTOR_4586 2

int aplicar_limite4586(int valor) {
    if (valor > LIMITE_4586) return LIMITE_4586;
    return valor * FACTOR_4586;
}
