// fichero 26166 -- macros y constantes -- MODIFICADO
#define LIMITE_26166 26366
#define FACTOR_26166 3

int aplicar_limite26166(int valor) {
    if (valor > LIMITE_26166) return LIMITE_26166;
    return valor * FACTOR_26166;
}
