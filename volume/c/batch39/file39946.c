// fichero 39946 -- macros y constantes
#define LIMITE_39946 40046
#define FACTOR_39946 2

int aplicar_limite39946(int valor) {
    if (valor > LIMITE_39946) return LIMITE_39946;
    return valor * FACTOR_39946;
}
