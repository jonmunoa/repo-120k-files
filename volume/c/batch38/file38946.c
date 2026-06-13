// fichero 38946 -- macros y constantes
#define LIMITE_38946 39046
#define FACTOR_38946 2

int aplicar_limite38946(int valor) {
    if (valor > LIMITE_38946) return LIMITE_38946;
    return valor * FACTOR_38946;
}
