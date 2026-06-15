// fichero 6166 -- macros y constantes -- MODIFICADO
#define LIMITE_6166 6366
#define FACTOR_6166 3

int aplicar_limite6166(int valor) {
    if (valor > LIMITE_6166) return LIMITE_6166;
    return valor * FACTOR_6166;
}
