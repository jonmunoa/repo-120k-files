// fichero 36946 -- macros y constantes -- MODIFICADO
#define LIMITE_36946 37146
#define FACTOR_36946 3

int aplicar_limite36946(int valor) {
    if (valor > LIMITE_36946) return LIMITE_36946;
    return valor * FACTOR_36946;
}
