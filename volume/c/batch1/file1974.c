// fichero 1974 -- macros y constantes
#define LIMITE_1974 2074
#define FACTOR_1974 5

int aplicar_limite1974(int valor) {
    if (valor > LIMITE_1974) return LIMITE_1974;
    return valor * FACTOR_1974;
}
