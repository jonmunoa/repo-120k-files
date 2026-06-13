// fichero 15914 -- macros y constantes
#define LIMITE_15914 16014
#define FACTOR_15914 5

int aplicar_limite15914(int valor) {
    if (valor > LIMITE_15914) return LIMITE_15914;
    return valor * FACTOR_15914;
}
