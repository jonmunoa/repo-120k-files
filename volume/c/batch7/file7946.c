// fichero 7946 -- macros y constantes
#define LIMITE_7946 8046
#define FACTOR_7946 2

int aplicar_limite7946(int valor) {
    if (valor > LIMITE_7946) return LIMITE_7946;
    return valor * FACTOR_7946;
}
