// fichero 14946 -- macros y constantes -- MODIFICADO
#define LIMITE_14946 15146
#define FACTOR_14946 3

int aplicar_limite14946(int valor) {
    if (valor > LIMITE_14946) return LIMITE_14946;
    return valor * FACTOR_14946;
}
