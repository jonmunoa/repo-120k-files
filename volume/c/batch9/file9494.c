// fichero 9494 -- macros y constantes
#define LIMITE_9494 9594
#define FACTOR_9494 5

int aplicar_limite9494(int valor) {
    if (valor > LIMITE_9494) return LIMITE_9494;
    return valor * FACTOR_9494;
}
