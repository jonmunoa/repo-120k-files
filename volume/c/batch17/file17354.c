// fichero 17354 -- macros y constantes
#define LIMITE_17354 17454
#define FACTOR_17354 5

int aplicar_limite17354(int valor) {
    if (valor > LIMITE_17354) return LIMITE_17354;
    return valor * FACTOR_17354;
}
