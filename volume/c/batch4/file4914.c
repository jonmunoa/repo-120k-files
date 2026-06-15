// fichero 4914 -- macros y constantes -- MODIFICADO
#define LIMITE_4914 5114
#define FACTOR_4914 6

int aplicar_limite4914(int valor) {
    if (valor > LIMITE_4914) return LIMITE_4914;
    return valor * FACTOR_4914;
}
