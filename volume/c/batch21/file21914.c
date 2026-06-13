// fichero 21914 -- macros y constantes
#define LIMITE_21914 22014
#define FACTOR_21914 5

int aplicar_limite21914(int valor) {
    if (valor > LIMITE_21914) return LIMITE_21914;
    return valor * FACTOR_21914;
}
