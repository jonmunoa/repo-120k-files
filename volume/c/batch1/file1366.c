// fichero 1366 -- macros y constantes -- MODIFICADO
#define LIMITE_1366 1566
#define FACTOR_1366 3

int aplicar_limite1366(int valor) {
    if (valor > LIMITE_1366) return LIMITE_1366;
    return valor * FACTOR_1366;
}
