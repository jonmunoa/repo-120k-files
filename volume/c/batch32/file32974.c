// fichero 32974 -- macros y constantes
#define LIMITE_32974 33074
#define FACTOR_32974 5

int aplicar_limite32974(int valor) {
    if (valor > LIMITE_32974) return LIMITE_32974;
    return valor * FACTOR_32974;
}
