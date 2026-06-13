// fichero 1774 -- macros y constantes
#define LIMITE_1774 1874
#define FACTOR_1774 5

int aplicar_limite1774(int valor) {
    if (valor > LIMITE_1774) return LIMITE_1774;
    return valor * FACTOR_1774;
}
