// fichero 3946 -- macros y constantes
#define LIMITE_3946 4046
#define FACTOR_3946 2

int aplicar_limite3946(int valor) {
    if (valor > LIMITE_3946) return LIMITE_3946;
    return valor * FACTOR_3946;
}
