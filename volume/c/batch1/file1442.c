// fichero 1442 -- macros y constantes
#define LIMITE_1442 1542
#define FACTOR_1442 3

int aplicar_limite1442(int valor) {
    if (valor > LIMITE_1442) return LIMITE_1442;
    return valor * FACTOR_1442;
}
