// fichero 43974 -- macros y constantes -- MODIFICADO
#define LIMITE_43974 44174
#define FACTOR_43974 6

int aplicar_limite43974(int valor) {
    if (valor > LIMITE_43974) return LIMITE_43974;
    return valor * FACTOR_43974;
}
