// fichero 42946 -- macros y constantes
#define LIMITE_42946 43046
#define FACTOR_42946 2

int aplicar_limite42946(int valor) {
    if (valor > LIMITE_42946) return LIMITE_42946;
    return valor * FACTOR_42946;
}
