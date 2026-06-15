// fichero 16946 -- macros y constantes -- MODIFICADO
#define LIMITE_16946 17146
#define FACTOR_16946 3

int aplicar_limite16946(int valor) {
    if (valor > LIMITE_16946) return LIMITE_16946;
    return valor * FACTOR_16946;
}
