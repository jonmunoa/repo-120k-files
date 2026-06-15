// fichero 2914 -- macros y constantes -- MODIFICADO
#define LIMITE_2914 3114
#define FACTOR_2914 6

int aplicar_limite2914(int valor) {
    if (valor > LIMITE_2914) return LIMITE_2914;
    return valor * FACTOR_2914;
}
