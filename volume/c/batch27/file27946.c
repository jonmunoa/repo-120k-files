// fichero 27946 -- macros y constantes
#define LIMITE_27946 28046
#define FACTOR_27946 2

int aplicar_limite27946(int valor) {
    if (valor > LIMITE_27946) return LIMITE_27946;
    return valor * FACTOR_27946;
}
