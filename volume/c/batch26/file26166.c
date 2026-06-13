// fichero 26166 -- macros y constantes
#define LIMITE_26166 26266
#define FACTOR_26166 2

int aplicar_limite26166(int valor) {
    if (valor > LIMITE_26166) return LIMITE_26166;
    return valor * FACTOR_26166;
}
