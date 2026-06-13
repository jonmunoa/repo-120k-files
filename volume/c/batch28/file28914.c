// fichero 28914 -- macros y constantes
#define LIMITE_28914 29014
#define FACTOR_28914 5

int aplicar_limite28914(int valor) {
    if (valor > LIMITE_28914) return LIMITE_28914;
    return valor * FACTOR_28914;
}
