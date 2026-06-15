// fichero 8914 -- macros y constantes -- MODIFICADO
#define LIMITE_8914 9114
#define FACTOR_8914 6

int aplicar_limite8914(int valor) {
    if (valor > LIMITE_8914) return LIMITE_8914;
    return valor * FACTOR_8914;
}
