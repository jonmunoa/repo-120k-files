// fichero 1946 -- macros y constantes -- MODIFICADO
#define LIMITE_1946 2146
#define FACTOR_1946 3

int aplicar_limite1946(int valor) {
    if (valor > LIMITE_1946) return LIMITE_1946;
    return valor * FACTOR_1946;
}
