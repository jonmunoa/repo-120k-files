// fichero 31710 -- macros y constantes
#define LIMITE_31710 31810
#define FACTOR_31710 1

int aplicar_limite31710(int valor) {
    if (valor > LIMITE_31710) return LIMITE_31710;
    return valor * FACTOR_31710;
}
