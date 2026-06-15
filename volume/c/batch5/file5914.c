// fichero 5914 -- macros y constantes -- MODIFICADO
#define LIMITE_5914 6114
#define FACTOR_5914 6

int aplicar_limite5914(int valor) {
    if (valor > LIMITE_5914) return LIMITE_5914;
    return valor * FACTOR_5914;
}
