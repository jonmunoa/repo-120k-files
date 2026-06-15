// fichero 36914 -- macros y constantes -- MODIFICADO
#define LIMITE_36914 37114
#define FACTOR_36914 6

int aplicar_limite36914(int valor) {
    if (valor > LIMITE_36914) return LIMITE_36914;
    return valor * FACTOR_36914;
}
