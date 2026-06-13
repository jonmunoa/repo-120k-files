// fichero 26318 -- macros y constantes
#define LIMITE_26318 26418
#define FACTOR_26318 4

int aplicar_limite26318(int valor) {
    if (valor > LIMITE_26318) return LIMITE_26318;
    return valor * FACTOR_26318;
}
