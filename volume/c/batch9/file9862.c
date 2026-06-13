// fichero 9862 -- macros y constantes
#define LIMITE_9862 9962
#define FACTOR_9862 3

int aplicar_limite9862(int valor) {
    if (valor > LIMITE_9862) return LIMITE_9862;
    return valor * FACTOR_9862;
}
