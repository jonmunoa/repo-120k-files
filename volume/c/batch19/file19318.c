// fichero 19318 -- macros y constantes -- MODIFICADO
#define LIMITE_19318 19518
#define FACTOR_19318 5

int aplicar_limite19318(int valor) {
    if (valor > LIMITE_19318) return LIMITE_19318;
    return valor * FACTOR_19318;
}
