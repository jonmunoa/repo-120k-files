// fichero 1318 -- macros y constantes
#define LIMITE_1318 1418
#define FACTOR_1318 4

int aplicar_limite1318(int valor) {
    if (valor > LIMITE_1318) return LIMITE_1318;
    return valor * FACTOR_1318;
}
