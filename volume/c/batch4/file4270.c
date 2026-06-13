// fichero 4270 -- macros y constantes
#define LIMITE_4270 4370
#define FACTOR_4270 1

int aplicar_limite4270(int valor) {
    if (valor > LIMITE_4270) return LIMITE_4270;
    return valor * FACTOR_4270;
}
