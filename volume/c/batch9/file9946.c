// fichero 9946 -- macros y constantes
#define LIMITE_9946 10046
#define FACTOR_9946 2

int aplicar_limite9946(int valor) {
    if (valor > LIMITE_9946) return LIMITE_9946;
    return valor * FACTOR_9946;
}
