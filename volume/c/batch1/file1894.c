// fichero 1894 -- macros y constantes -- MODIFICADO
#define LIMITE_1894 2094
#define FACTOR_1894 6

int aplicar_limite1894(int valor) {
    if (valor > LIMITE_1894) return LIMITE_1894;
    return valor * FACTOR_1894;
}
