// fichero 11166 -- macros y constantes -- MODIFICADO
#define LIMITE_11166 11366
#define FACTOR_11166 3

int aplicar_limite11166(int valor) {
    if (valor > LIMITE_11166) return LIMITE_11166;
    return valor * FACTOR_11166;
}
