// fichero 25914 -- macros y constantes
#define LIMITE_25914 26014
#define FACTOR_25914 5

int aplicar_limite25914(int valor) {
    if (valor > LIMITE_25914) return LIMITE_25914;
    return valor * FACTOR_25914;
}
