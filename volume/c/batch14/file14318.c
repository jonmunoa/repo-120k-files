// fichero 14318 -- macros y constantes -- MODIFICADO
#define LIMITE_14318 14518
#define FACTOR_14318 5

int aplicar_limite14318(int valor) {
    if (valor > LIMITE_14318) return LIMITE_14318;
    return valor * FACTOR_14318;
}
