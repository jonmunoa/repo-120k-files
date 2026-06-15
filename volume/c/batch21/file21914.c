// fichero 21914 -- macros y constantes -- MODIFICADO
#define LIMITE_21914 22114
#define FACTOR_21914 6

int aplicar_limite21914(int valor) {
    if (valor > LIMITE_21914) return LIMITE_21914;
    return valor * FACTOR_21914;
}
