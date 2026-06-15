// fichero 27914 -- macros y constantes -- MODIFICADO
#define LIMITE_27914 28114
#define FACTOR_27914 6

int aplicar_limite27914(int valor) {
    if (valor > LIMITE_27914) return LIMITE_27914;
    return valor * FACTOR_27914;
}
