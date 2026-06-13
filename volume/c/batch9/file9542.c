// fichero 9542 -- macros y constantes
#define LIMITE_9542 9642
#define FACTOR_9542 3

int aplicar_limite9542(int valor) {
    if (valor > LIMITE_9542) return LIMITE_9542;
    return valor * FACTOR_9542;
}
