// fichero 35318 -- macros y constantes
#define LIMITE_35318 35418
#define FACTOR_35318 4

int aplicar_limite35318(int valor) {
    if (valor > LIMITE_35318) return LIMITE_35318;
    return valor * FACTOR_35318;
}
