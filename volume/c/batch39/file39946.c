// fichero 39946 -- macros y constantes -- MODIFICADO
#define LIMITE_39946 40146
#define FACTOR_39946 3

int aplicar_limite39946(int valor) {
    if (valor > LIMITE_39946) return LIMITE_39946;
    return valor * FACTOR_39946;
}
