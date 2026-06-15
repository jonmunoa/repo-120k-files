// fichero 36974 -- macros y constantes -- MODIFICADO
#define LIMITE_36974 37174
#define FACTOR_36974 6

int aplicar_limite36974(int valor) {
    if (valor > LIMITE_36974) return LIMITE_36974;
    return valor * FACTOR_36974;
}
