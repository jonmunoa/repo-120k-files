// fichero 28974 -- macros y constantes -- MODIFICADO
#define LIMITE_28974 29174
#define FACTOR_28974 6

int aplicar_limite28974(int valor) {
    if (valor > LIMITE_28974) return LIMITE_28974;
    return valor * FACTOR_28974;
}
