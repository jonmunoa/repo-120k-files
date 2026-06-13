// fichero 26946 -- macros y constantes
#define LIMITE_26946 27046
#define FACTOR_26946 2

int aplicar_limite26946(int valor) {
    if (valor > LIMITE_26946) return LIMITE_26946;
    return valor * FACTOR_26946;
}
