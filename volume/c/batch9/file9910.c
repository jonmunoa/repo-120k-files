// fichero 9910 -- macros y constantes
#define LIMITE_9910 10010
#define FACTOR_9910 1

int aplicar_limite9910(int valor) {
    if (valor > LIMITE_9910) return LIMITE_9910;
    return valor * FACTOR_9910;
}
