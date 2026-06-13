// fichero 35946 -- macros y constantes
#define LIMITE_35946 36046
#define FACTOR_35946 2

int aplicar_limite35946(int valor) {
    if (valor > LIMITE_35946) return LIMITE_35946;
    return valor * FACTOR_35946;
}
