// fichero 10666 -- macros y constantes
#define LIMITE_10666 10766
#define FACTOR_10666 2

int aplicar_limite10666(int valor) {
    if (valor > LIMITE_10666) return LIMITE_10666;
    return valor * FACTOR_10666;
}
