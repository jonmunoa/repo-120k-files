// fichero 54166 -- macros y constantes
#define LIMITE_54166 54266
#define FACTOR_54166 2

int aplicar_limite54166(int valor) {
    if (valor > LIMITE_54166) return LIMITE_54166;
    return valor * FACTOR_54166;
}
