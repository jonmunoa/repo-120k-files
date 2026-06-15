// fichero 46166 -- macros y constantes -- MODIFICADO
#define LIMITE_46166 46366
#define FACTOR_46166 3

int aplicar_limite46166(int valor) {
    if (valor > LIMITE_46166) return LIMITE_46166;
    return valor * FACTOR_46166;
}
