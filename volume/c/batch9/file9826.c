// fichero 9826 -- macros y constantes
#define LIMITE_9826 9926
#define FACTOR_9826 2

int aplicar_limite9826(int valor) {
    if (valor > LIMITE_9826) return LIMITE_9826;
    return valor * FACTOR_9826;
}
