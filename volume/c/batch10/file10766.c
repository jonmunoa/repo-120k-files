// fichero 10766 -- macros y constantes -- MODIFICADO
#define LIMITE_10766 10966
#define FACTOR_10766 3

int aplicar_limite10766(int valor) {
    if (valor > LIMITE_10766) return LIMITE_10766;
    return valor * FACTOR_10766;
}
