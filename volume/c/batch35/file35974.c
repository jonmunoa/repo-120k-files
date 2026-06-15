// fichero 35974 -- macros y constantes -- MODIFICADO
#define LIMITE_35974 36174
#define FACTOR_35974 6

int aplicar_limite35974(int valor) {
    if (valor > LIMITE_35974) return LIMITE_35974;
    return valor * FACTOR_35974;
}
