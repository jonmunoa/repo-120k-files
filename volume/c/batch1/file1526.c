// fichero 1526 -- macros y constantes
#define LIMITE_1526 1626
#define FACTOR_1526 2

int aplicar_limite1526(int valor) {
    if (valor > LIMITE_1526) return LIMITE_1526;
    return valor * FACTOR_1526;
}
