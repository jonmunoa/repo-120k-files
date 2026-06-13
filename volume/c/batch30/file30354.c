// fichero 30354 -- macros y constantes
#define LIMITE_30354 30454
#define FACTOR_30354 5

int aplicar_limite30354(int valor) {
    if (valor > LIMITE_30354) return LIMITE_30354;
    return valor * FACTOR_30354;
}
