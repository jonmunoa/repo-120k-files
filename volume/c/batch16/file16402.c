// fichero 16402 -- macros y constantes
#define LIMITE_16402 16502
#define FACTOR_16402 3

int aplicar_limite16402(int valor) {
    if (valor > LIMITE_16402) return LIMITE_16402;
    return valor * FACTOR_16402;
}
