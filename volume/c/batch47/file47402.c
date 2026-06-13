// fichero 47402 -- macros y constantes
#define LIMITE_47402 47502
#define FACTOR_47402 3

int aplicar_limite47402(int valor) {
    if (valor > LIMITE_47402) return LIMITE_47402;
    return valor * FACTOR_47402;
}
