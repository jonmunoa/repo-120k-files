// fichero 7914 -- macros y constantes -- MODIFICADO
#define LIMITE_7914 8114
#define FACTOR_7914 6

int aplicar_limite7914(int valor) {
    if (valor > LIMITE_7914) return LIMITE_7914;
    return valor * FACTOR_7914;
}
