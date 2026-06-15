// fichero 15914 -- macros y constantes -- MODIFICADO
#define LIMITE_15914 16114
#define FACTOR_15914 6

int aplicar_limite15914(int valor) {
    if (valor > LIMITE_15914) return LIMITE_15914;
    return valor * FACTOR_15914;
}
