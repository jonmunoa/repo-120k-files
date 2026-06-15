// fichero 1914 -- macros y constantes -- MODIFICADO
#define LIMITE_1914 2114
#define FACTOR_1914 6

int aplicar_limite1914(int valor) {
    if (valor > LIMITE_1914) return LIMITE_1914;
    return valor * FACTOR_1914;
}
