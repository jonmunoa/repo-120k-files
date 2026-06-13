// fichero 1674 -- macros y constantes
#define LIMITE_1674 1774
#define FACTOR_1674 5

int aplicar_limite1674(int valor) {
    if (valor > LIMITE_1674) return LIMITE_1674;
    return valor * FACTOR_1674;
}
