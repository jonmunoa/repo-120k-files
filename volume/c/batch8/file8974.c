// fichero 8974 -- macros y constantes -- MODIFICADO
#define LIMITE_8974 9174
#define FACTOR_8974 6

int aplicar_limite8974(int valor) {
    if (valor > LIMITE_8974) return LIMITE_8974;
    return valor * FACTOR_8974;
}
