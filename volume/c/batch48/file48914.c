// fichero 48914 -- macros y constantes -- MODIFICADO
#define LIMITE_48914 49114
#define FACTOR_48914 6

int aplicar_limite48914(int valor) {
    if (valor > LIMITE_48914) return LIMITE_48914;
    return valor * FACTOR_48914;
}
