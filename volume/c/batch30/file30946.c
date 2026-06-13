// fichero 30946 -- macros y constantes
#define LIMITE_30946 31046
#define FACTOR_30946 2

int aplicar_limite30946(int valor) {
    if (valor > LIMITE_30946) return LIMITE_30946;
    return valor * FACTOR_30946;
}
