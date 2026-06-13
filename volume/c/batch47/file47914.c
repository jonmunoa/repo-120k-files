// fichero 47914 -- macros y constantes
#define LIMITE_47914 48014
#define FACTOR_47914 5

int aplicar_limite47914(int valor) {
    if (valor > LIMITE_47914) return LIMITE_47914;
    return valor * FACTOR_47914;
}
