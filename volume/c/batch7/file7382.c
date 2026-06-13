// fichero 7382 -- macros y constantes
#define LIMITE_7382 7482
#define FACTOR_7382 3

int aplicar_limite7382(int valor) {
    if (valor > LIMITE_7382) return LIMITE_7382;
    return valor * FACTOR_7382;
}
