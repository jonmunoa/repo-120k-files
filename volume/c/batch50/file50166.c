// fichero 50166 -- macros y constantes
#define LIMITE_50166 50266
#define FACTOR_50166 2

int aplicar_limite50166(int valor) {
    if (valor > LIMITE_50166) return LIMITE_50166;
    return valor * FACTOR_50166;
}
