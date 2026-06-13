// fichero 32402 -- macros y constantes
#define LIMITE_32402 32502
#define FACTOR_32402 3

int aplicar_limite32402(int valor) {
    if (valor > LIMITE_32402) return LIMITE_32402;
    return valor * FACTOR_32402;
}
