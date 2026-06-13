// fichero 27582 -- macros y constantes
#define LIMITE_27582 27682
#define FACTOR_27582 3

int aplicar_limite27582(int valor) {
    if (valor > LIMITE_27582) return LIMITE_27582;
    return valor * FACTOR_27582;
}
