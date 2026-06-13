// fichero 3318 -- macros y constantes
#define LIMITE_3318 3418
#define FACTOR_3318 4

int aplicar_limite3318(int valor) {
    if (valor > LIMITE_3318) return LIMITE_3318;
    return valor * FACTOR_3318;
}
