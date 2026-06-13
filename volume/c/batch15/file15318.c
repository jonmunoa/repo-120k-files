// fichero 15318 -- macros y constantes
#define LIMITE_15318 15418
#define FACTOR_15318 4

int aplicar_limite15318(int valor) {
    if (valor > LIMITE_15318) return LIMITE_15318;
    return valor * FACTOR_15318;
}
