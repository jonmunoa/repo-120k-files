// fichero 9354 -- macros y constantes
#define LIMITE_9354 9454
#define FACTOR_9354 5

int aplicar_limite9354(int valor) {
    if (valor > LIMITE_9354) return LIMITE_9354;
    return valor * FACTOR_9354;
}
