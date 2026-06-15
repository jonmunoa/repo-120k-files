// fichero 12914 -- macros y constantes -- MODIFICADO
#define LIMITE_12914 13114
#define FACTOR_12914 6

int aplicar_limite12914(int valor) {
    if (valor > LIMITE_12914) return LIMITE_12914;
    return valor * FACTOR_12914;
}
