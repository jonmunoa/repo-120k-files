// fichero 44974 -- macros y constantes -- MODIFICADO
#define LIMITE_44974 45174
#define FACTOR_44974 6

int aplicar_limite44974(int valor) {
    if (valor > LIMITE_44974) return LIMITE_44974;
    return valor * FACTOR_44974;
}
