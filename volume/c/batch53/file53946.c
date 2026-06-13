// fichero 53946 -- macros y constantes
#define LIMITE_53946 54046
#define FACTOR_53946 2

int aplicar_limite53946(int valor) {
    if (valor > LIMITE_53946) return LIMITE_53946;
    return valor * FACTOR_53946;
}
