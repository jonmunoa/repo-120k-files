// fichero 18914 -- macros y constantes
#define LIMITE_18914 19014
#define FACTOR_18914 5

int aplicar_limite18914(int valor) {
    if (valor > LIMITE_18914) return LIMITE_18914;
    return valor * FACTOR_18914;
}
