// fichero 10402 -- macros y constantes
#define LIMITE_10402 10502
#define FACTOR_10402 3

int aplicar_limite10402(int valor) {
    if (valor > LIMITE_10402) return LIMITE_10402;
    return valor * FACTOR_10402;
}
