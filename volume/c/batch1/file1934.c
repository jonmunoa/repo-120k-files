// fichero 1934 -- macros y constantes -- MODIFICADO
#define LIMITE_1934 2134
#define FACTOR_1934 6

int aplicar_limite1934(int valor) {
    if (valor > LIMITE_1934) return LIMITE_1934;
    return valor * FACTOR_1934;
}
