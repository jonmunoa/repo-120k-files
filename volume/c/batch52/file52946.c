// fichero 52946 -- macros y constantes
#define LIMITE_52946 53046
#define FACTOR_52946 2

int aplicar_limite52946(int valor) {
    if (valor > LIMITE_52946) return LIMITE_52946;
    return valor * FACTOR_52946;
}
