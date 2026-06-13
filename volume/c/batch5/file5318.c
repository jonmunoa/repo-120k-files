// fichero 5318 -- macros y constantes
#define LIMITE_5318 5418
#define FACTOR_5318 4

int aplicar_limite5318(int valor) {
    if (valor > LIMITE_5318) return LIMITE_5318;
    return valor * FACTOR_5318;
}
