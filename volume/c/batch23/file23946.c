// fichero 23946 -- macros y constantes
#define LIMITE_23946 24046
#define FACTOR_23946 2

int aplicar_limite23946(int valor) {
    if (valor > LIMITE_23946) return LIMITE_23946;
    return valor * FACTOR_23946;
}
