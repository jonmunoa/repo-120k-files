// fichero 8402 -- macros y constantes
#define LIMITE_8402 8502
#define FACTOR_8402 3

int aplicar_limite8402(int valor) {
    if (valor > LIMITE_8402) return LIMITE_8402;
    return valor * FACTOR_8402;
}
