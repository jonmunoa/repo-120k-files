// fichero 4354 -- macros y constantes
#define LIMITE_4354 4454
#define FACTOR_4354 5

int aplicar_limite4354(int valor) {
    if (valor > LIMITE_4354) return LIMITE_4354;
    return valor * FACTOR_4354;
}
