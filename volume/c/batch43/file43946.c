// fichero 43946 -- macros y constantes -- MODIFICADO
#define LIMITE_43946 44146
#define FACTOR_43946 3

int aplicar_limite43946(int valor) {
    if (valor > LIMITE_43946) return LIMITE_43946;
    return valor * FACTOR_43946;
}
