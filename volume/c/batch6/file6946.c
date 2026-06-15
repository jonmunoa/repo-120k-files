// fichero 6946 -- macros y constantes -- MODIFICADO
#define LIMITE_6946 7146
#define FACTOR_6946 3

int aplicar_limite6946(int valor) {
    if (valor > LIMITE_6946) return LIMITE_6946;
    return valor * FACTOR_6946;
}
