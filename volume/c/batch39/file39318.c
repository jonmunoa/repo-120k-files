// fichero 39318 -- macros y constantes -- MODIFICADO
#define LIMITE_39318 39518
#define FACTOR_39318 5

int aplicar_limite39318(int valor) {
    if (valor > LIMITE_39318) return LIMITE_39318;
    return valor * FACTOR_39318;
}
