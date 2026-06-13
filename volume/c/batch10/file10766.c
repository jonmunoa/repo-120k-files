// fichero 10766 -- macros y constantes
#define LIMITE_10766 10866
#define FACTOR_10766 2

int aplicar_limite10766(int valor) {
    if (valor > LIMITE_10766) return LIMITE_10766;
    return valor * FACTOR_10766;
}
