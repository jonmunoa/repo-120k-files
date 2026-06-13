// fichero 45166 -- macros y constantes
#define LIMITE_45166 45266
#define FACTOR_45166 2

int aplicar_limite45166(int valor) {
    if (valor > LIMITE_45166) return LIMITE_45166;
    return valor * FACTOR_45166;
}
