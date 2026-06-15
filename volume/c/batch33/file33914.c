// fichero 33914 -- macros y constantes -- MODIFICADO
#define LIMITE_33914 34114
#define FACTOR_33914 6

int aplicar_limite33914(int valor) {
    if (valor > LIMITE_33914) return LIMITE_33914;
    return valor * FACTOR_33914;
}
