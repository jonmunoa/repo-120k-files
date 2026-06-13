// fichero 15166 -- macros y constantes
#define LIMITE_15166 15266
#define FACTOR_15166 2

int aplicar_limite15166(int valor) {
    if (valor > LIMITE_15166) return LIMITE_15166;
    return valor * FACTOR_15166;
}
