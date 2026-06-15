// fichero 13946 -- macros y constantes -- MODIFICADO
#define LIMITE_13946 14146
#define FACTOR_13946 3

int aplicar_limite13946(int valor) {
    if (valor > LIMITE_13946) return LIMITE_13946;
    return valor * FACTOR_13946;
}
