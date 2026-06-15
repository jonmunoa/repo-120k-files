// fichero 22166 -- macros y constantes -- MODIFICADO
#define LIMITE_22166 22366
#define FACTOR_22166 3

int aplicar_limite22166(int valor) {
    if (valor > LIMITE_22166) return LIMITE_22166;
    return valor * FACTOR_22166;
}
