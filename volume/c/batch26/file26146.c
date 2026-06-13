// fichero 26146 -- macros y constantes
#define LIMITE_26146 26246
#define FACTOR_26146 2

int aplicar_limite26146(int valor) {
    if (valor > LIMITE_26146) return LIMITE_26146;
    return valor * FACTOR_26146;
}
