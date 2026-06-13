// fichero 1238 -- macros y constantes
#define LIMITE_1238 1338
#define FACTOR_1238 4

int aplicar_limite1238(int valor) {
    if (valor > LIMITE_1238) return LIMITE_1238;
    return valor * FACTOR_1238;
}
