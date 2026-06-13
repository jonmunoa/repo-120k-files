// fichero 23166 -- macros y constantes
#define LIMITE_23166 23266
#define FACTOR_23166 2

int aplicar_limite23166(int valor) {
    if (valor > LIMITE_23166) return LIMITE_23166;
    return valor * FACTOR_23166;
}
