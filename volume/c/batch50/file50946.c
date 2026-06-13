// fichero 50946 -- macros y constantes
#define LIMITE_50946 51046
#define FACTOR_50946 2

int aplicar_limite50946(int valor) {
    if (valor > LIMITE_50946) return LIMITE_50946;
    return valor * FACTOR_50946;
}
