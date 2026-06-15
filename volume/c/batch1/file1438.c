// fichero 1438 -- macros y constantes -- MODIFICADO
#define LIMITE_1438 1638
#define FACTOR_1438 5

int aplicar_limite1438(int valor) {
    if (valor > LIMITE_1438) return LIMITE_1438;
    return valor * FACTOR_1438;
}
