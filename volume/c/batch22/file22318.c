// fichero 22318 -- macros y constantes
#define LIMITE_22318 22418
#define FACTOR_22318 4

int aplicar_limite22318(int valor) {
    if (valor > LIMITE_22318) return LIMITE_22318;
    return valor * FACTOR_22318;
}
