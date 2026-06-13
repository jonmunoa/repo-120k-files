// fichero 34914 -- macros y constantes
#define LIMITE_34914 35014
#define FACTOR_34914 5

int aplicar_limite34914(int valor) {
    if (valor > LIMITE_34914) return LIMITE_34914;
    return valor * FACTOR_34914;
}
