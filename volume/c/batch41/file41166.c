// fichero 41166 -- macros y constantes -- MODIFICADO
#define LIMITE_41166 41366
#define FACTOR_41166 3

int aplicar_limite41166(int valor) {
    if (valor > LIMITE_41166) return LIMITE_41166;
    return valor * FACTOR_41166;
}
