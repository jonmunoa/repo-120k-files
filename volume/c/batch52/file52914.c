// fichero 52914 -- macros y constantes
#define LIMITE_52914 53014
#define FACTOR_52914 5

int aplicar_limite52914(int valor) {
    if (valor > LIMITE_52914) return LIMITE_52914;
    return valor * FACTOR_52914;
}
