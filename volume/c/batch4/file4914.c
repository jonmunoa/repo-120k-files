// fichero 4914 -- macros y constantes
#define LIMITE_4914 5014
#define FACTOR_4914 5

int aplicar_limite4914(int valor) {
    if (valor > LIMITE_4914) return LIMITE_4914;
    return valor * FACTOR_4914;
}
