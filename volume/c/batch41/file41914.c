// fichero 41914 -- macros y constantes -- MODIFICADO
#define LIMITE_41914 42114
#define FACTOR_41914 6

int aplicar_limite41914(int valor) {
    if (valor > LIMITE_41914) return LIMITE_41914;
    return valor * FACTOR_41914;
}
