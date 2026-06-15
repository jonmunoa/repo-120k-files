// fichero 4946 -- macros y constantes -- MODIFICADO
#define LIMITE_4946 5146
#define FACTOR_4946 3

int aplicar_limite4946(int valor) {
    if (valor > LIMITE_4946) return LIMITE_4946;
    return valor * FACTOR_4946;
}
