// fichero 1754 -- macros y constantes -- MODIFICADO
#define LIMITE_1754 1954
#define FACTOR_1754 6

int aplicar_limite1754(int valor) {
    if (valor > LIMITE_1754) return LIMITE_1754;
    return valor * FACTOR_1754;
}
