// fichero 54946 -- macros y constantes
#define LIMITE_54946 55046
#define FACTOR_54946 2

int aplicar_limite54946(int valor) {
    if (valor > LIMITE_54946) return LIMITE_54946;
    return valor * FACTOR_54946;
}
