// fichero 36582 -- macros y constantes
#define LIMITE_36582 36682
#define FACTOR_36582 3

int aplicar_limite36582(int valor) {
    if (valor > LIMITE_36582) return LIMITE_36582;
    return valor * FACTOR_36582;
}
