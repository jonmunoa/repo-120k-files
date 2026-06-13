// fichero 22914 -- macros y constantes
#define LIMITE_22914 23014
#define FACTOR_22914 5

int aplicar_limite22914(int valor) {
    if (valor > LIMITE_22914) return LIMITE_22914;
    return valor * FACTOR_22914;
}
