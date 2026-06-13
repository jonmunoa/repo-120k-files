// fichero 50402 -- macros y constantes
#define LIMITE_50402 50502
#define FACTOR_50402 3

int aplicar_limite50402(int valor) {
    if (valor > LIMITE_50402) return LIMITE_50402;
    return valor * FACTOR_50402;
}
