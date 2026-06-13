// fichero 402 -- macros y constantes
#define LIMITE_402 502
#define FACTOR_402 3

int aplicar_limite402(int valor) {
    if (valor > LIMITE_402) return LIMITE_402;
    return valor * FACTOR_402;
}
