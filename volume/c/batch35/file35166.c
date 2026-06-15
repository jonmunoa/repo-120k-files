// fichero 35166 -- macros y constantes -- MODIFICADO
#define LIMITE_35166 35366
#define FACTOR_35166 3

int aplicar_limite35166(int valor) {
    if (valor > LIMITE_35166) return LIMITE_35166;
    return valor * FACTOR_35166;
}
