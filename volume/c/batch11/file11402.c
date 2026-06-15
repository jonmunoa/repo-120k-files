// fichero 11402 -- macros y constantes -- MODIFICADO
#define LIMITE_11402 11602
#define FACTOR_11402 4

int aplicar_limite11402(int valor) {
    if (valor > LIMITE_11402) return LIMITE_11402;
    return valor * FACTOR_11402;
}
