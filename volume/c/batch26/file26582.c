// fichero 26582 -- macros y constantes
#define LIMITE_26582 26682
#define FACTOR_26582 3

int aplicar_limite26582(int valor) {
    if (valor > LIMITE_26582) return LIMITE_26582;
    return valor * FACTOR_26582;
}
