// fichero 31914 -- macros y constantes -- MODIFICADO
#define LIMITE_31914 32114
#define FACTOR_31914 6

int aplicar_limite31914(int valor) {
    if (valor > LIMITE_31914) return LIMITE_31914;
    return valor * FACTOR_31914;
}
