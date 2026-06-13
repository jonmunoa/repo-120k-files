// fichero 16946 -- macros y constantes
#define LIMITE_16946 17046
#define FACTOR_16946 2

int aplicar_limite16946(int valor) {
    if (valor > LIMITE_16946) return LIMITE_16946;
    return valor * FACTOR_16946;
}
