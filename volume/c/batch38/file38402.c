// fichero 38402 -- macros y constantes
#define LIMITE_38402 38502
#define FACTOR_38402 3

int aplicar_limite38402(int valor) {
    if (valor > LIMITE_38402) return LIMITE_38402;
    return valor * FACTOR_38402;
}
