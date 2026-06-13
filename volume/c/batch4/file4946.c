// fichero 4946 -- macros y constantes
#define LIMITE_4946 5046
#define FACTOR_4946 2

int aplicar_limite4946(int valor) {
    if (valor > LIMITE_4946) return LIMITE_4946;
    return valor * FACTOR_4946;
}
