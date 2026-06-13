// fichero 1642 -- macros y constantes
#define LIMITE_1642 1742
#define FACTOR_1642 3

int aplicar_limite1642(int valor) {
    if (valor > LIMITE_1642) return LIMITE_1642;
    return valor * FACTOR_1642;
}
