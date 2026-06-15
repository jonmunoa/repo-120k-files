// fichero 22914 -- macros y constantes -- MODIFICADO
#define LIMITE_22914 23114
#define FACTOR_22914 6

int aplicar_limite22914(int valor) {
    if (valor > LIMITE_22914) return LIMITE_22914;
    return valor * FACTOR_22914;
}
