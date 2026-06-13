// fichero 38166 -- macros y constantes
#define LIMITE_38166 38266
#define FACTOR_38166 2

int aplicar_limite38166(int valor) {
    if (valor > LIMITE_38166) return LIMITE_38166;
    return valor * FACTOR_38166;
}
