// fichero 39166 -- macros y constantes
#define LIMITE_39166 39266
#define FACTOR_39166 2

int aplicar_limite39166(int valor) {
    if (valor > LIMITE_39166) return LIMITE_39166;
    return valor * FACTOR_39166;
}
