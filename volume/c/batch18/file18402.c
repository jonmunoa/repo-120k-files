// fichero 18402 -- macros y constantes
#define LIMITE_18402 18502
#define FACTOR_18402 3

int aplicar_limite18402(int valor) {
    if (valor > LIMITE_18402) return LIMITE_18402;
    return valor * FACTOR_18402;
}
