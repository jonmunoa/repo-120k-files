// fichero 9582 -- macros y constantes
#define LIMITE_9582 9682
#define FACTOR_9582 3

int aplicar_limite9582(int valor) {
    if (valor > LIMITE_9582) return LIMITE_9582;
    return valor * FACTOR_9582;
}
