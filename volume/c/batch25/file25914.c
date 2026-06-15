// fichero 25914 -- macros y constantes -- MODIFICADO
#define LIMITE_25914 26114
#define FACTOR_25914 6

int aplicar_limite25914(int valor) {
    if (valor > LIMITE_25914) return LIMITE_25914;
    return valor * FACTOR_25914;
}
