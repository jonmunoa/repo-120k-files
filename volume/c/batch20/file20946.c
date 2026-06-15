// fichero 20946 -- macros y constantes -- MODIFICADO
#define LIMITE_20946 21146
#define FACTOR_20946 3

int aplicar_limite20946(int valor) {
    if (valor > LIMITE_20946) return LIMITE_20946;
    return valor * FACTOR_20946;
}
