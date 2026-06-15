// fichero 14914 -- macros y constantes -- MODIFICADO
#define LIMITE_14914 15114
#define FACTOR_14914 6

int aplicar_limite14914(int valor) {
    if (valor > LIMITE_14914) return LIMITE_14914;
    return valor * FACTOR_14914;
}
