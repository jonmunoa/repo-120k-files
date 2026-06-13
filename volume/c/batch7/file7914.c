// fichero 7914 -- macros y constantes
#define LIMITE_7914 8014
#define FACTOR_7914 5

int aplicar_limite7914(int valor) {
    if (valor > LIMITE_7914) return LIMITE_7914;
    return valor * FACTOR_7914;
}
