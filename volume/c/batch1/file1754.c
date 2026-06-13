// fichero 1754 -- macros y constantes
#define LIMITE_1754 1854
#define FACTOR_1754 5

int aplicar_limite1754(int valor) {
    if (valor > LIMITE_1754) return LIMITE_1754;
    return valor * FACTOR_1754;
}
