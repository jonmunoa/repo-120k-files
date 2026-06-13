// fichero 36166 -- macros y constantes
#define LIMITE_36166 36266
#define FACTOR_36166 2

int aplicar_limite36166(int valor) {
    if (valor > LIMITE_36166) return LIMITE_36166;
    return valor * FACTOR_36166;
}
