// fichero 1694 -- macros y constantes -- MODIFICADO
#define LIMITE_1694 1894
#define FACTOR_1694 6

int aplicar_limite1694(int valor) {
    if (valor > LIMITE_1694) return LIMITE_1694;
    return valor * FACTOR_1694;
}
