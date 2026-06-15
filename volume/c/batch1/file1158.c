// fichero 1158 -- macros y constantes -- MODIFICADO
#define LIMITE_1158 1358
#define FACTOR_1158 5

int aplicar_limite1158(int valor) {
    if (valor > LIMITE_1158) return LIMITE_1158;
    return valor * FACTOR_1158;
}
