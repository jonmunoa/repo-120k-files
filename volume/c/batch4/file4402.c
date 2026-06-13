// fichero 4402 -- macros y constantes
#define LIMITE_4402 4502
#define FACTOR_4402 3

int aplicar_limite4402(int valor) {
    if (valor > LIMITE_4402) return LIMITE_4402;
    return valor * FACTOR_4402;
}
