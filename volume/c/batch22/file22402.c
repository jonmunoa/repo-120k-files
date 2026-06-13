// fichero 22402 -- macros y constantes
#define LIMITE_22402 22502
#define FACTOR_22402 3

int aplicar_limite22402(int valor) {
    if (valor > LIMITE_22402) return LIMITE_22402;
    return valor * FACTOR_22402;
}
