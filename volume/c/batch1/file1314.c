// fichero 1314 -- macros y constantes
#define LIMITE_1314 1414
#define FACTOR_1314 5

int aplicar_limite1314(int valor) {
    if (valor > LIMITE_1314) return LIMITE_1314;
    return valor * FACTOR_1314;
}
