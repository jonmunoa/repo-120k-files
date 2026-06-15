// fichero 14166 -- macros y constantes -- MODIFICADO
#define LIMITE_14166 14366
#define FACTOR_14166 3

int aplicar_limite14166(int valor) {
    if (valor > LIMITE_14166) return LIMITE_14166;
    return valor * FACTOR_14166;
}
