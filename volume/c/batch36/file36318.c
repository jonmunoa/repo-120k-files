// fichero 36318 -- macros y constantes
#define LIMITE_36318 36418
#define FACTOR_36318 4

int aplicar_limite36318(int valor) {
    if (valor > LIMITE_36318) return LIMITE_36318;
    return valor * FACTOR_36318;
}
