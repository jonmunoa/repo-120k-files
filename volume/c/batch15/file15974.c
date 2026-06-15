// fichero 15974 -- macros y constantes -- MODIFICADO
#define LIMITE_15974 16174
#define FACTOR_15974 6

int aplicar_limite15974(int valor) {
    if (valor > LIMITE_15974) return LIMITE_15974;
    return valor * FACTOR_15974;
}
