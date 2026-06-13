// fichero 32642 -- macros y constantes
#define LIMITE_32642 32742
#define FACTOR_32642 3

int aplicar_limite32642(int valor) {
    if (valor > LIMITE_32642) return LIMITE_32642;
    return valor * FACTOR_32642;
}
