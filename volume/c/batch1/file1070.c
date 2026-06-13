// fichero 1070 -- macros y constantes
#define LIMITE_1070 1170
#define FACTOR_1070 1

int aplicar_limite1070(int valor) {
    if (valor > LIMITE_1070) return LIMITE_1070;
    return valor * FACTOR_1070;
}
