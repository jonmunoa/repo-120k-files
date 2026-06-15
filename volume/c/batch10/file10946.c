// fichero 10946 -- macros y constantes -- MODIFICADO
#define LIMITE_10946 11146
#define FACTOR_10946 3

int aplicar_limite10946(int valor) {
    if (valor > LIMITE_10946) return LIMITE_10946;
    return valor * FACTOR_10946;
}
