// fichero 27914 -- macros y constantes
#define LIMITE_27914 28014
#define FACTOR_27914 5

int aplicar_limite27914(int valor) {
    if (valor > LIMITE_27914) return LIMITE_27914;
    return valor * FACTOR_27914;
}
