// fichero 26494 -- macros y constantes
#define LIMITE_26494 26594
#define FACTOR_26494 5

int aplicar_limite26494(int valor) {
    if (valor > LIMITE_26494) return LIMITE_26494;
    return valor * FACTOR_26494;
}
