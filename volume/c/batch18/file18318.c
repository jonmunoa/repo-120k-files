// fichero 18318 -- macros y constantes -- MODIFICADO
#define LIMITE_18318 18518
#define FACTOR_18318 5

int aplicar_limite18318(int valor) {
    if (valor > LIMITE_18318) return LIMITE_18318;
    return valor * FACTOR_18318;
}
