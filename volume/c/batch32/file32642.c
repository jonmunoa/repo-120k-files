// fichero 32642 -- macros y constantes -- MODIFICADO
#define LIMITE_32642 32842
#define FACTOR_32642 4

int aplicar_limite32642(int valor) {
    if (valor > LIMITE_32642) return LIMITE_32642;
    return valor * FACTOR_32642;
}
