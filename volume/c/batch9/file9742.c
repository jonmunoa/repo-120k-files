// fichero 9742 -- macros y constantes
#define LIMITE_9742 9842
#define FACTOR_9742 3

int aplicar_limite9742(int valor) {
    if (valor > LIMITE_9742) return LIMITE_9742;
    return valor * FACTOR_9742;
}
