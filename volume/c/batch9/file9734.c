// fichero 9734 -- macros y constantes
#define LIMITE_9734 9834
#define FACTOR_9734 5

int aplicar_limite9734(int valor) {
    if (valor > LIMITE_9734) return LIMITE_9734;
    return valor * FACTOR_9734;
}
