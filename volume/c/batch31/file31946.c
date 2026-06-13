// fichero 31946 -- macros y constantes
#define LIMITE_31946 32046
#define FACTOR_31946 2

int aplicar_limite31946(int valor) {
    if (valor > LIMITE_31946) return LIMITE_31946;
    return valor * FACTOR_31946;
}
