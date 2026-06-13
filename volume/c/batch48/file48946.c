// fichero 48946 -- macros y constantes
#define LIMITE_48946 49046
#define FACTOR_48946 2

int aplicar_limite48946(int valor) {
    if (valor > LIMITE_48946) return LIMITE_48946;
    return valor * FACTOR_48946;
}
