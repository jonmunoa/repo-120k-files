// fichero 26318 -- macros y constantes -- MODIFICADO
#define LIMITE_26318 26518
#define FACTOR_26318 5

int aplicar_limite26318(int valor) {
    if (valor > LIMITE_26318) return LIMITE_26318;
    return valor * FACTOR_26318;
}
