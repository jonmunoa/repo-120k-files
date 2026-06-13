// fichero 4166 -- macros y constantes
#define LIMITE_4166 4266
#define FACTOR_4166 2

int aplicar_limite4166(int valor) {
    if (valor > LIMITE_4166) return LIMITE_4166;
    return valor * FACTOR_4166;
}
