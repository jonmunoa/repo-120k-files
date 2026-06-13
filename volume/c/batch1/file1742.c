// fichero 1742 -- macros y constantes
#define LIMITE_1742 1842
#define FACTOR_1742 3

int aplicar_limite1742(int valor) {
    if (valor > LIMITE_1742) return LIMITE_1742;
    return valor * FACTOR_1742;
}
