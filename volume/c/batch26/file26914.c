// fichero 26914 -- macros y constantes -- MODIFICADO
#define LIMITE_26914 27114
#define FACTOR_26914 6

int aplicar_limite26914(int valor) {
    if (valor > LIMITE_26914) return LIMITE_26914;
    return valor * FACTOR_26914;
}
