// fichero 27402 -- macros y constantes
#define LIMITE_27402 27502
#define FACTOR_27402 3

int aplicar_limite27402(int valor) {
    if (valor > LIMITE_27402) return LIMITE_27402;
    return valor * FACTOR_27402;
}
