// fichero 26974 -- macros y constantes -- MODIFICADO
#define LIMITE_26974 27174
#define FACTOR_26974 6

int aplicar_limite26974(int valor) {
    if (valor > LIMITE_26974) return LIMITE_26974;
    return valor * FACTOR_26974;
}
