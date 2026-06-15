// fichero 18914 -- macros y constantes -- MODIFICADO
#define LIMITE_18914 19114
#define FACTOR_18914 6

int aplicar_limite18914(int valor) {
    if (valor > LIMITE_18914) return LIMITE_18914;
    return valor * FACTOR_18914;
}
