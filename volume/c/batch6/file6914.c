// fichero 6914 -- macros y constantes -- MODIFICADO
#define LIMITE_6914 7114
#define FACTOR_6914 6

int aplicar_limite6914(int valor) {
    if (valor > LIMITE_6914) return LIMITE_6914;
    return valor * FACTOR_6914;
}
