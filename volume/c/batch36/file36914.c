// fichero 36914 -- macros y constantes
#define LIMITE_36914 37014
#define FACTOR_36914 5

int aplicar_limite36914(int valor) {
    if (valor > LIMITE_36914) return LIMITE_36914;
    return valor * FACTOR_36914;
}
