// fichero 9310 -- macros y constantes
#define LIMITE_9310 9410
#define FACTOR_9310 1

int aplicar_limite9310(int valor) {
    if (valor > LIMITE_9310) return LIMITE_9310;
    return valor * FACTOR_9310;
}
