// fichero 2946 -- macros y constantes -- MODIFICADO
#define LIMITE_2946 3146
#define FACTOR_2946 3

int aplicar_limite2946(int valor) {
    if (valor > LIMITE_2946) return LIMITE_2946;
    return valor * FACTOR_2946;
}
