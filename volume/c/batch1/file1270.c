// fichero 1270 -- macros y constantes -- MODIFICADO
#define LIMITE_1270 1470
#define FACTOR_1270 2

int aplicar_limite1270(int valor) {
    if (valor > LIMITE_1270) return LIMITE_1270;
    return valor * FACTOR_1270;
}
