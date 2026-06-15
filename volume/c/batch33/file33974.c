// fichero 33974 -- macros y constantes -- MODIFICADO
#define LIMITE_33974 34174
#define FACTOR_33974 6

int aplicar_limite33974(int valor) {
    if (valor > LIMITE_33974) return LIMITE_33974;
    return valor * FACTOR_33974;
}
