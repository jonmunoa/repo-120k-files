// fichero 9654 -- macros y constantes
#define LIMITE_9654 9754
#define FACTOR_9654 5

int aplicar_limite9654(int valor) {
    if (valor > LIMITE_9654) return LIMITE_9654;
    return valor * FACTOR_9654;
}
