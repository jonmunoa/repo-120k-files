// fichero 11402 -- macros y constantes
#define LIMITE_11402 11502
#define FACTOR_11402 3

int aplicar_limite11402(int valor) {
    if (valor > LIMITE_11402) return LIMITE_11402;
    return valor * FACTOR_11402;
}
