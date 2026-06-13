// fichero 11946 -- macros y constantes
#define LIMITE_11946 12046
#define FACTOR_11946 2

int aplicar_limite11946(int valor) {
    if (valor > LIMITE_11946) return LIMITE_11946;
    return valor * FACTOR_11946;
}
