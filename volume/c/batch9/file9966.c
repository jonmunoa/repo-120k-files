// fichero 9966 -- macros y constantes
#define LIMITE_9966 10066
#define FACTOR_9966 2

int aplicar_limite9966(int valor) {
    if (valor > LIMITE_9966) return LIMITE_9966;
    return valor * FACTOR_9966;
}
