// fichero 2946 -- macros y constantes
#define LIMITE_2946 3046
#define FACTOR_2946 2

int aplicar_limite2946(int valor) {
    if (valor > LIMITE_2946) return LIMITE_2946;
    return valor * FACTOR_2946;
}
