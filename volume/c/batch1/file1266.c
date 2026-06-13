// fichero 1266 -- macros y constantes
#define LIMITE_1266 1366
#define FACTOR_1266 2

int aplicar_limite1266(int valor) {
    if (valor > LIMITE_1266) return LIMITE_1266;
    return valor * FACTOR_1266;
}
