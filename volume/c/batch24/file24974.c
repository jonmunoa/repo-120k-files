// fichero 24974 -- macros y constantes -- MODIFICADO
#define LIMITE_24974 25174
#define FACTOR_24974 6

int aplicar_limite24974(int valor) {
    if (valor > LIMITE_24974) return LIMITE_24974;
    return valor * FACTOR_24974;
}
