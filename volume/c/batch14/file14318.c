// fichero 14318 -- macros y constantes
#define LIMITE_14318 14418
#define FACTOR_14318 4

int aplicar_limite14318(int valor) {
    if (valor > LIMITE_14318) return LIMITE_14318;
    return valor * FACTOR_14318;
}
