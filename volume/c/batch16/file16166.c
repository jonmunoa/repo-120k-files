// fichero 16166 -- macros y constantes
#define LIMITE_16166 16266
#define FACTOR_16166 2

int aplicar_limite16166(int valor) {
    if (valor > LIMITE_16166) return LIMITE_16166;
    return valor * FACTOR_16166;
}
