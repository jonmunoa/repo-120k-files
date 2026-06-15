// fichero 1974 -- macros y constantes -- MODIFICADO
#define LIMITE_1974 2174
#define FACTOR_1974 6

int aplicar_limite1974(int valor) {
    if (valor > LIMITE_1974) return LIMITE_1974;
    return valor * FACTOR_1974;
}
