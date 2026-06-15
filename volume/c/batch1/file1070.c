// fichero 1070 -- macros y constantes -- MODIFICADO
#define LIMITE_1070 1270
#define FACTOR_1070 2

int aplicar_limite1070(int valor) {
    if (valor > LIMITE_1070) return LIMITE_1070;
    return valor * FACTOR_1070;
}
