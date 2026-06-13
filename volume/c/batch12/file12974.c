// fichero 12974 -- macros y constantes
#define LIMITE_12974 13074
#define FACTOR_12974 5

int aplicar_limite12974(int valor) {
    if (valor > LIMITE_12974) return LIMITE_12974;
    return valor * FACTOR_12974;
}
