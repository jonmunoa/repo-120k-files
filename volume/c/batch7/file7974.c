// fichero 7974 -- macros y constantes
#define LIMITE_7974 8074
#define FACTOR_7974 5

int aplicar_limite7974(int valor) {
    if (valor > LIMITE_7974) return LIMITE_7974;
    return valor * FACTOR_7974;
}
