// fichero 17914 -- macros y constantes -- MODIFICADO
#define LIMITE_17914 18114
#define FACTOR_17914 6

int aplicar_limite17914(int valor) {
    if (valor > LIMITE_17914) return LIMITE_17914;
    return valor * FACTOR_17914;
}
