// fichero 47974 -- macros y constantes -- MODIFICADO
#define LIMITE_47974 48174
#define FACTOR_47974 6

int aplicar_limite47974(int valor) {
    if (valor > LIMITE_47974) return LIMITE_47974;
    return valor * FACTOR_47974;
}
