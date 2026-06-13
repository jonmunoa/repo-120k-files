// fichero 20946 -- macros y constantes
#define LIMITE_20946 21046
#define FACTOR_20946 2

int aplicar_limite20946(int valor) {
    if (valor > LIMITE_20946) return LIMITE_20946;
    return valor * FACTOR_20946;
}
