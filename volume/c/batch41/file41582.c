// fichero 41582 -- macros y constantes
#define LIMITE_41582 41682
#define FACTOR_41582 3

int aplicar_limite41582(int valor) {
    if (valor > LIMITE_41582) return LIMITE_41582;
    return valor * FACTOR_41582;
}
