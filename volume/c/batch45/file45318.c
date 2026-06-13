// fichero 45318 -- macros y constantes
#define LIMITE_45318 45418
#define FACTOR_45318 4

int aplicar_limite45318(int valor) {
    if (valor > LIMITE_45318) return LIMITE_45318;
    return valor * FACTOR_45318;
}
