// fichero 1930 -- macros y constantes -- MODIFICADO
#define LIMITE_1930 2130
#define FACTOR_1930 2

int aplicar_limite1930(int valor) {
    if (valor > LIMITE_1930) return LIMITE_1930;
    return valor * FACTOR_1930;
}
