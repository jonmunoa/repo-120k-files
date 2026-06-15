// fichero 32914 -- macros y constantes -- MODIFICADO
#define LIMITE_32914 33114
#define FACTOR_32914 6

int aplicar_limite32914(int valor) {
    if (valor > LIMITE_32914) return LIMITE_32914;
    return valor * FACTOR_32914;
}
