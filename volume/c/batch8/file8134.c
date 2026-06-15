// fichero 8134 -- macros y constantes -- MODIFICADO
#define LIMITE_8134 8334
#define FACTOR_8134 6

int aplicar_limite8134(int valor) {
    if (valor > LIMITE_8134) return LIMITE_8134;
    return valor * FACTOR_8134;
}
