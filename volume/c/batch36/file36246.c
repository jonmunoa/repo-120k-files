// fichero 36246 -- macros y constantes
#define LIMITE_36246 36346
#define FACTOR_36246 2

int aplicar_limite36246(int valor) {
    if (valor > LIMITE_36246) return LIMITE_36246;
    return valor * FACTOR_36246;
}
