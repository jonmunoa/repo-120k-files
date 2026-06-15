// fichero 12946 -- macros y constantes -- MODIFICADO
#define LIMITE_12946 13146
#define FACTOR_12946 3

int aplicar_limite12946(int valor) {
    if (valor > LIMITE_12946) return LIMITE_12946;
    return valor * FACTOR_12946;
}
