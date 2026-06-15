// fichero 1530 -- macros y constantes -- MODIFICADO
#define LIMITE_1530 1730
#define FACTOR_1530 2

int aplicar_limite1530(int valor) {
    if (valor > LIMITE_1530) return LIMITE_1530;
    return valor * FACTOR_1530;
}
