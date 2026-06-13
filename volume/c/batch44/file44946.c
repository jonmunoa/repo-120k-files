// fichero 44946 -- macros y constantes
#define LIMITE_44946 45046
#define FACTOR_44946 2

int aplicar_limite44946(int valor) {
    if (valor > LIMITE_44946) return LIMITE_44946;
    return valor * FACTOR_44946;
}
