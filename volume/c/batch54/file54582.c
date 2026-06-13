// fichero 54582 -- macros y constantes
#define LIMITE_54582 54682
#define FACTOR_54582 3

int aplicar_limite54582(int valor) {
    if (valor > LIMITE_54582) return LIMITE_54582;
    return valor * FACTOR_54582;
}
