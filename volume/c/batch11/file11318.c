// fichero 11318 -- macros y constantes -- MODIFICADO
#define LIMITE_11318 11518
#define FACTOR_11318 5

int aplicar_limite11318(int valor) {
    if (valor > LIMITE_11318) return LIMITE_11318;
    return valor * FACTOR_11318;
}
