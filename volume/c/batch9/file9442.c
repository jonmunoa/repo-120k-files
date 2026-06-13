// fichero 9442 -- macros y constantes
#define LIMITE_9442 9542
#define FACTOR_9442 3

int aplicar_limite9442(int valor) {
    if (valor > LIMITE_9442) return LIMITE_9442;
    return valor * FACTOR_9442;
}
