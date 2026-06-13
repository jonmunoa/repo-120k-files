// fichero 1358 -- macros y constantes
#define LIMITE_1358 1458
#define FACTOR_1358 4

int aplicar_limite1358(int valor) {
    if (valor > LIMITE_1358) return LIMITE_1358;
    return valor * FACTOR_1358;
}
