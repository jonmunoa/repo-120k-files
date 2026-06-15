// fichero 18946 -- macros y constantes -- MODIFICADO
#define LIMITE_18946 19146
#define FACTOR_18946 3

int aplicar_limite18946(int valor) {
    if (valor > LIMITE_18946) return LIMITE_18946;
    return valor * FACTOR_18946;
}
