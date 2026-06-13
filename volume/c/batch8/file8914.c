// fichero 8914 -- macros y constantes
#define LIMITE_8914 9014
#define FACTOR_8914 5

int aplicar_limite8914(int valor) {
    if (valor > LIMITE_8914) return LIMITE_8914;
    return valor * FACTOR_8914;
}
