// fichero 1462 -- macros y constantes
#define LIMITE_1462 1562
#define FACTOR_1462 3

int aplicar_limite1462(int valor) {
    if (valor > LIMITE_1462) return LIMITE_1462;
    return valor * FACTOR_1462;
}
