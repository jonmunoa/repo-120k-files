// fichero 18166 -- macros y constantes
#define LIMITE_18166 18266
#define FACTOR_18166 2

int aplicar_limite18166(int valor) {
    if (valor > LIMITE_18166) return LIMITE_18166;
    return valor * FACTOR_18166;
}
