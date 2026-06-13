// fichero 21582 -- macros y constantes
#define LIMITE_21582 21682
#define FACTOR_21582 3

int aplicar_limite21582(int valor) {
    if (valor > LIMITE_21582) return LIMITE_21582;
    return valor * FACTOR_21582;
}
