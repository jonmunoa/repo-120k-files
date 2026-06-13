// fichero 44166 -- macros y constantes
#define LIMITE_44166 44266
#define FACTOR_44166 2

int aplicar_limite44166(int valor) {
    if (valor > LIMITE_44166) return LIMITE_44166;
    return valor * FACTOR_44166;
}
