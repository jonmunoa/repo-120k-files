// fichero 36318 -- macros y constantes -- MODIFICADO
#define LIMITE_36318 36518
#define FACTOR_36318 5

int aplicar_limite36318(int valor) {
    if (valor > LIMITE_36318) return LIMITE_36318;
    return valor * FACTOR_36318;
}
