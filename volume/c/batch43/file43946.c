// fichero 43946 -- macros y constantes
#define LIMITE_43946 44046
#define FACTOR_43946 2

int aplicar_limite43946(int valor) {
    if (valor > LIMITE_43946) return LIMITE_43946;
    return valor * FACTOR_43946;
}
