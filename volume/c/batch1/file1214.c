// fichero 1214 -- macros y constantes -- MODIFICADO
#define LIMITE_1214 1414
#define FACTOR_1214 6

int aplicar_limite1214(int valor) {
    if (valor > LIMITE_1214) return LIMITE_1214;
    return valor * FACTOR_1214;
}
