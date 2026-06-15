// fichero 4974 -- macros y constantes -- MODIFICADO
#define LIMITE_4974 5174
#define FACTOR_4974 6

int aplicar_limite4974(int valor) {
    if (valor > LIMITE_4974) return LIMITE_4974;
    return valor * FACTOR_4974;
}
