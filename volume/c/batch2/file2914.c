// fichero 2914 -- macros y constantes
#define LIMITE_2914 3014
#define FACTOR_2914 5

int aplicar_limite2914(int valor) {
    if (valor > LIMITE_2914) return LIMITE_2914;
    return valor * FACTOR_2914;
}
