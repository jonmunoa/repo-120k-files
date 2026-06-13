// fichero 1338 -- macros y constantes
#define LIMITE_1338 1438
#define FACTOR_1338 4

int aplicar_limite1338(int valor) {
    if (valor > LIMITE_1338) return LIMITE_1338;
    return valor * FACTOR_1338;
}
