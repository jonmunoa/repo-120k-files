// fichero 26946 -- macros y constantes -- MODIFICADO
#define LIMITE_26946 27146
#define FACTOR_26946 3

int aplicar_limite26946(int valor) {
    if (valor > LIMITE_26946) return LIMITE_26946;
    return valor * FACTOR_26946;
}
