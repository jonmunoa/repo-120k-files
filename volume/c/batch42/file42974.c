// fichero 42974 -- macros y constantes
#define LIMITE_42974 43074
#define FACTOR_42974 5

int aplicar_limite42974(int valor) {
    if (valor > LIMITE_42974) return LIMITE_42974;
    return valor * FACTOR_42974;
}
