// fichero 17914 -- macros y constantes
#define LIMITE_17914 18014
#define FACTOR_17914 5

int aplicar_limite17914(int valor) {
    if (valor > LIMITE_17914) return LIMITE_17914;
    return valor * FACTOR_17914;
}
