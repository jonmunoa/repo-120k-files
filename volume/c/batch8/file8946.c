// fichero 8946 -- macros y constantes -- MODIFICADO
#define LIMITE_8946 9146
#define FACTOR_8946 3

int aplicar_limite8946(int valor) {
    if (valor > LIMITE_8946) return LIMITE_8946;
    return valor * FACTOR_8946;
}
