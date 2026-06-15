// fichero 26246 -- macros y constantes -- MODIFICADO
#define LIMITE_26246 26446
#define FACTOR_26246 3

int aplicar_limite26246(int valor) {
    if (valor > LIMITE_26246) return LIMITE_26246;
    return valor * FACTOR_26246;
}
