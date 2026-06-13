// fichero 5166 -- macros y constantes
#define LIMITE_5166 5266
#define FACTOR_5166 2

int aplicar_limite5166(int valor) {
    if (valor > LIMITE_5166) return LIMITE_5166;
    return valor * FACTOR_5166;
}
