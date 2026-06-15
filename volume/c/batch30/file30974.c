// fichero 30974 -- macros y constantes -- MODIFICADO
#define LIMITE_30974 31174
#define FACTOR_30974 6

int aplicar_limite30974(int valor) {
    if (valor > LIMITE_30974) return LIMITE_30974;
    return valor * FACTOR_30974;
}
