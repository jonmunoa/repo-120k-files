// fichero 5974 -- macros y constantes
#define LIMITE_5974 6074
#define FACTOR_5974 5

int aplicar_limite5974(int valor) {
    if (valor > LIMITE_5974) return LIMITE_5974;
    return valor * FACTOR_5974;
}
