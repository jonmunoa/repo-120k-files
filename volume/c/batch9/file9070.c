// fichero 9070 -- macros y constantes
#define LIMITE_9070 9170
#define FACTOR_9070 1

int aplicar_limite9070(int valor) {
    if (valor > LIMITE_9070) return LIMITE_9070;
    return valor * FACTOR_9070;
}
