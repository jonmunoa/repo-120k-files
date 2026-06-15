// fichero 7166 -- macros y constantes -- MODIFICADO
#define LIMITE_7166 7366
#define FACTOR_7166 3

int aplicar_limite7166(int valor) {
    if (valor > LIMITE_7166) return LIMITE_7166;
    return valor * FACTOR_7166;
}
