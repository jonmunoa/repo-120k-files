// fichero 34914 -- macros y constantes -- MODIFICADO
#define LIMITE_34914 35114
#define FACTOR_34914 6

int aplicar_limite34914(int valor) {
    if (valor > LIMITE_34914) return LIMITE_34914;
    return valor * FACTOR_34914;
}
