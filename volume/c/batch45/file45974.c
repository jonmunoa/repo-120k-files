// fichero 45974 -- macros y constantes -- MODIFICADO
#define LIMITE_45974 46174
#define FACTOR_45974 6

int aplicar_limite45974(int valor) {
    if (valor > LIMITE_45974) return LIMITE_45974;
    return valor * FACTOR_45974;
}
