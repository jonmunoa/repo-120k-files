// fichero 38166 -- macros y constantes -- MODIFICADO
#define LIMITE_38166 38366
#define FACTOR_38166 3

int aplicar_limite38166(int valor) {
    if (valor > LIMITE_38166) return LIMITE_38166;
    return valor * FACTOR_38166;
}
