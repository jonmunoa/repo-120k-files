// fichero 16914 -- macros y constantes
#define LIMITE_16914 17014
#define FACTOR_16914 5

int aplicar_limite16914(int valor) {
    if (valor > LIMITE_16914) return LIMITE_16914;
    return valor * FACTOR_16914;
}
