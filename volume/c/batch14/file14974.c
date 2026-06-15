// fichero 14974 -- macros y constantes -- MODIFICADO
#define LIMITE_14974 15174
#define FACTOR_14974 6

int aplicar_limite14974(int valor) {
    if (valor > LIMITE_14974) return LIMITE_14974;
    return valor * FACTOR_14974;
}
