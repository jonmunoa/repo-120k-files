// fichero 1682 -- macros y constantes
#define LIMITE_1682 1782
#define FACTOR_1682 3

int aplicar_limite1682(int valor) {
    if (valor > LIMITE_1682) return LIMITE_1682;
    return valor * FACTOR_1682;
}
