// fichero 5946 -- macros y constantes
#define LIMITE_5946 6046
#define FACTOR_5946 2

int aplicar_limite5946(int valor) {
    if (valor > LIMITE_5946) return LIMITE_5946;
    return valor * FACTOR_5946;
}
