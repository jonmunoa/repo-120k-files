// fichero 2402 -- macros y constantes
#define LIMITE_2402 2502
#define FACTOR_2402 3

int aplicar_limite2402(int valor) {
    if (valor > LIMITE_2402) return LIMITE_2402;
    return valor * FACTOR_2402;
}
