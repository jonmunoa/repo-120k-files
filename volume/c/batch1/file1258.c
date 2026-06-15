// fichero 1258 -- macros y constantes -- MODIFICADO
#define LIMITE_1258 1458
#define FACTOR_1258 5

int aplicar_limite1258(int valor) {
    if (valor > LIMITE_1258) return LIMITE_1258;
    return valor * FACTOR_1258;
}
