// fichero 7974 -- macros y constantes -- MODIFICADO
#define LIMITE_7974 8174
#define FACTOR_7974 6

int aplicar_limite7974(int valor) {
    if (valor > LIMITE_7974) return LIMITE_7974;
    return valor * FACTOR_7974;
}
