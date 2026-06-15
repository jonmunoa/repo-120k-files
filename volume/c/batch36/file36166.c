// fichero 36166 -- macros y constantes -- MODIFICADO
#define LIMITE_36166 36366
#define FACTOR_36166 3

int aplicar_limite36166(int valor) {
    if (valor > LIMITE_36166) return LIMITE_36166;
    return valor * FACTOR_36166;
}
