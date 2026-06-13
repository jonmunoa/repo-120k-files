// fichero 46946 -- macros y constantes
#define LIMITE_46946 47046
#define FACTOR_46946 2

int aplicar_limite46946(int valor) {
    if (valor > LIMITE_46946) return LIMITE_46946;
    return valor * FACTOR_46946;
}
