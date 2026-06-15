// fichero 12974 -- macros y constantes -- MODIFICADO
#define LIMITE_12974 13174
#define FACTOR_12974 6

int aplicar_limite12974(int valor) {
    if (valor > LIMITE_12974) return LIMITE_12974;
    return valor * FACTOR_12974;
}
