// fichero 9526 -- macros y constantes
#define LIMITE_9526 9626
#define FACTOR_9526 2

int aplicar_limite9526(int valor) {
    if (valor > LIMITE_9526) return LIMITE_9526;
    return valor * FACTOR_9526;
}
