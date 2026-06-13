// fichero 8946 -- macros y constantes
#define LIMITE_8946 9046
#define FACTOR_8946 2

int aplicar_limite8946(int valor) {
    if (valor > LIMITE_8946) return LIMITE_8946;
    return valor * FACTOR_8946;
}
