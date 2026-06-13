// fichero 26246 -- macros y constantes
#define LIMITE_26246 26346
#define FACTOR_26246 2

int aplicar_limite26246(int valor) {
    if (valor > LIMITE_26246) return LIMITE_26246;
    return valor * FACTOR_26246;
}
