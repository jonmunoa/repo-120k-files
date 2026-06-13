// fichero 23914 -- macros y constantes
#define LIMITE_23914 24014
#define FACTOR_23914 5

int aplicar_limite23914(int valor) {
    if (valor > LIMITE_23914) return LIMITE_23914;
    return valor * FACTOR_23914;
}
