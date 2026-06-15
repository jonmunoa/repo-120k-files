// fichero 31974 -- macros y constantes -- MODIFICADO
#define LIMITE_31974 32174
#define FACTOR_31974 6

int aplicar_limite31974(int valor) {
    if (valor > LIMITE_31974) return LIMITE_31974;
    return valor * FACTOR_31974;
}
