// fichero 1158 -- macros y constantes
#define LIMITE_1158 1258
#define FACTOR_1158 4

int aplicar_limite1158(int valor) {
    if (valor > LIMITE_1158) return LIMITE_1158;
    return valor * FACTOR_1158;
}
