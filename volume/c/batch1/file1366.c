// fichero 1366 -- macros y constantes
#define LIMITE_1366 1466
#define FACTOR_1366 2

int aplicar_limite1366(int valor) {
    if (valor > LIMITE_1366) return LIMITE_1366;
    return valor * FACTOR_1366;
}
