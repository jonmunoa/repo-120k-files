// fichero 41166 -- macros y constantes
#define LIMITE_41166 41266
#define FACTOR_41166 2

int aplicar_limite41166(int valor) {
    if (valor > LIMITE_41166) return LIMITE_41166;
    return valor * FACTOR_41166;
}
