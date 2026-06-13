// fichero 3354 -- macros y constantes
#define LIMITE_3354 3454
#define FACTOR_3354 5

int aplicar_limite3354(int valor) {
    if (valor > LIMITE_3354) return LIMITE_3354;
    return valor * FACTOR_3354;
}
