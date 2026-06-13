// fichero 1606 -- macros y constantes
#define LIMITE_1606 1706
#define FACTOR_1606 2

int aplicar_limite1606(int valor) {
    if (valor > LIMITE_1606) return LIMITE_1606;
    return valor * FACTOR_1606;
}
