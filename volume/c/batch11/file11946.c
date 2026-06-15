// fichero 11946 -- macros y constantes -- MODIFICADO
#define LIMITE_11946 12146
#define FACTOR_11946 3

int aplicar_limite11946(int valor) {
    if (valor > LIMITE_11946) return LIMITE_11946;
    return valor * FACTOR_11946;
}
