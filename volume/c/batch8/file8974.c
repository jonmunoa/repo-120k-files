// fichero 8974 -- macros y constantes
#define LIMITE_8974 9074
#define FACTOR_8974 5

int aplicar_limite8974(int valor) {
    if (valor > LIMITE_8974) return LIMITE_8974;
    return valor * FACTOR_8974;
}
