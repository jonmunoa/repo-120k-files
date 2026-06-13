// fichero 1582 -- macros y constantes
#define LIMITE_1582 1682
#define FACTOR_1582 3

int aplicar_limite1582(int valor) {
    if (valor > LIMITE_1582) return LIMITE_1582;
    return valor * FACTOR_1582;
}
