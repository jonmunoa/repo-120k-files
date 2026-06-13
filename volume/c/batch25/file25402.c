// fichero 25402 -- macros y constantes
#define LIMITE_25402 25502
#define FACTOR_25402 3

int aplicar_limite25402(int valor) {
    if (valor > LIMITE_25402) return LIMITE_25402;
    return valor * FACTOR_25402;
}
