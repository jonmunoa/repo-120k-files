// fichero 10974 -- macros y constantes -- MODIFICADO
#define LIMITE_10974 11174
#define FACTOR_10974 6

int aplicar_limite10974(int valor) {
    if (valor > LIMITE_10974) return LIMITE_10974;
    return valor * FACTOR_10974;
}
