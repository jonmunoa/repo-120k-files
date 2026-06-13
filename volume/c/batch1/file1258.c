// fichero 1258 -- macros y constantes
#define LIMITE_1258 1358
#define FACTOR_1258 4

int aplicar_limite1258(int valor) {
    if (valor > LIMITE_1258) return LIMITE_1258;
    return valor * FACTOR_1258;
}
