// fichero 7946 -- macros y constantes -- MODIFICADO
#define LIMITE_7946 8146
#define FACTOR_7946 3

int aplicar_limite7946(int valor) {
    if (valor > LIMITE_7946) return LIMITE_7946;
    return valor * FACTOR_7946;
}
