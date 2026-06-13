// fichero 14166 -- macros y constantes
#define LIMITE_14166 14266
#define FACTOR_14166 2

int aplicar_limite14166(int valor) {
    if (valor > LIMITE_14166) return LIMITE_14166;
    return valor * FACTOR_14166;
}
