// fichero 7318 -- macros y constantes
#define LIMITE_7318 7418
#define FACTOR_7318 4

int aplicar_limite7318(int valor) {
    if (valor > LIMITE_7318) return LIMITE_7318;
    return valor * FACTOR_7318;
}
