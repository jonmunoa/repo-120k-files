// fichero 1914 -- macros y constantes
#define LIMITE_1914 2014
#define FACTOR_1914 5

int aplicar_limite1914(int valor) {
    if (valor > LIMITE_1914) return LIMITE_1914;
    return valor * FACTOR_1914;
}
