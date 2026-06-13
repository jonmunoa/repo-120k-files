// fichero 46166 -- macros y constantes
#define LIMITE_46166 46266
#define FACTOR_46166 2

int aplicar_limite46166(int valor) {
    if (valor > LIMITE_46166) return LIMITE_46166;
    return valor * FACTOR_46166;
}
