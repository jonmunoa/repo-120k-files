// fichero 946 -- macros y constantes
#define LIMITE_946 1046
#define FACTOR_946 2

int aplicar_limite946(int valor) {
    if (valor > LIMITE_946) return LIMITE_946;
    return valor * FACTOR_946;
}
