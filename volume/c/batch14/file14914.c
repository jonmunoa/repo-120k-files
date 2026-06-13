// fichero 14914 -- macros y constantes
#define LIMITE_14914 15014
#define FACTOR_14914 5

int aplicar_limite14914(int valor) {
    if (valor > LIMITE_14914) return LIMITE_14914;
    return valor * FACTOR_14914;
}
