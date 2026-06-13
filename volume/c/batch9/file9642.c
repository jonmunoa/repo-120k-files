// fichero 9642 -- macros y constantes
#define LIMITE_9642 9742
#define FACTOR_9642 3

int aplicar_limite9642(int valor) {
    if (valor > LIMITE_9642) return LIMITE_9642;
    return valor * FACTOR_9642;
}
