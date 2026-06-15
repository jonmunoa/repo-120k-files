// fichero 32946 -- macros y constantes -- MODIFICADO
#define LIMITE_32946 33146
#define FACTOR_32946 3

int aplicar_limite32946(int valor) {
    if (valor > LIMITE_32946) return LIMITE_32946;
    return valor * FACTOR_32946;
}
