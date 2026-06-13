// fichero 23402 -- macros y constantes
#define LIMITE_23402 23502
#define FACTOR_23402 3

int aplicar_limite23402(int valor) {
    if (valor > LIMITE_23402) return LIMITE_23402;
    return valor * FACTOR_23402;
}
