// fichero 16974 -- macros y constantes -- MODIFICADO
#define LIMITE_16974 17174
#define FACTOR_16974 6

int aplicar_limite16974(int valor) {
    if (valor > LIMITE_16974) return LIMITE_16974;
    return valor * FACTOR_16974;
}
