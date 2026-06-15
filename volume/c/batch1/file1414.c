// fichero 1414 -- macros y constantes -- MODIFICADO
#define LIMITE_1414 1614
#define FACTOR_1414 6

int aplicar_limite1414(int valor) {
    if (valor > LIMITE_1414) return LIMITE_1414;
    return valor * FACTOR_1414;
}
