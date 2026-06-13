// fichero 32914 -- macros y constantes
#define LIMITE_32914 33014
#define FACTOR_32914 5

int aplicar_limite32914(int valor) {
    if (valor > LIMITE_32914) return LIMITE_32914;
    return valor * FACTOR_32914;
}
