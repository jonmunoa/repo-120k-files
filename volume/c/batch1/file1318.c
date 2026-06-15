// fichero 1318 -- macros y constantes -- MODIFICADO
#define LIMITE_1318 1518
#define FACTOR_1318 5

int aplicar_limite1318(int valor) {
    if (valor > LIMITE_1318) return LIMITE_1318;
    return valor * FACTOR_1318;
}
