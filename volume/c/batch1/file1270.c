// fichero 1270 -- macros y constantes
#define LIMITE_1270 1370
#define FACTOR_1270 1

int aplicar_limite1270(int valor) {
    if (valor > LIMITE_1270) return LIMITE_1270;
    return valor * FACTOR_1270;
}
