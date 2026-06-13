// fichero 1354 -- macros y constantes
#define LIMITE_1354 1454
#define FACTOR_1354 5

int aplicar_limite1354(int valor) {
    if (valor > LIMITE_1354) return LIMITE_1354;
    return valor * FACTOR_1354;
}
