// fichero 11318 -- macros y constantes
#define LIMITE_11318 11418
#define FACTOR_11318 4

int aplicar_limite11318(int valor) {
    if (valor > LIMITE_11318) return LIMITE_11318;
    return valor * FACTOR_11318;
}
