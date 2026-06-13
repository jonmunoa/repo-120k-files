// fichero 50974 -- macros y constantes
#define LIMITE_50974 51074
#define FACTOR_50974 5

int aplicar_limite50974(int valor) {
    if (valor > LIMITE_50974) return LIMITE_50974;
    return valor * FACTOR_50974;
}
