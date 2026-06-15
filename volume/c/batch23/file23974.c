// fichero 23974 -- macros y constantes -- MODIFICADO
#define LIMITE_23974 24174
#define FACTOR_23974 6

int aplicar_limite23974(int valor) {
    if (valor > LIMITE_23974) return LIMITE_23974;
    return valor * FACTOR_23974;
}
