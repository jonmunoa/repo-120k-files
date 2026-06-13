// fichero 6974 -- macros y constantes
#define LIMITE_6974 7074
#define FACTOR_6974 5

int aplicar_limite6974(int valor) {
    if (valor > LIMITE_6974) return LIMITE_6974;
    return valor * FACTOR_6974;
}
