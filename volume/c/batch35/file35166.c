// fichero 35166 -- macros y constantes
#define LIMITE_35166 35266
#define FACTOR_35166 2

int aplicar_limite35166(int valor) {
    if (valor > LIMITE_35166) return LIMITE_35166;
    return valor * FACTOR_35166;
}
