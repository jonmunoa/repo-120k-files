// fichero 31582 -- macros y constantes
#define LIMITE_31582 31682
#define FACTOR_31582 3

int aplicar_limite31582(int valor) {
    if (valor > LIMITE_31582) return LIMITE_31582;
    return valor * FACTOR_31582;
}
