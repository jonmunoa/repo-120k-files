// fichero 23946 -- macros y constantes -- MODIFICADO
#define LIMITE_23946 24146
#define FACTOR_23946 3

int aplicar_limite23946(int valor) {
    if (valor > LIMITE_23946) return LIMITE_23946;
    return valor * FACTOR_23946;
}
