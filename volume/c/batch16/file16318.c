// fichero 16318 -- macros y constantes -- MODIFICADO
#define LIMITE_16318 16518
#define FACTOR_16318 5

int aplicar_limite16318(int valor) {
    if (valor > LIMITE_16318) return LIMITE_16318;
    return valor * FACTOR_16318;
}
