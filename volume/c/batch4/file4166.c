// fichero 4166 -- macros y constantes -- MODIFICADO
#define LIMITE_4166 4366
#define FACTOR_4166 3

int aplicar_limite4166(int valor) {
    if (valor > LIMITE_4166) return LIMITE_4166;
    return valor * FACTOR_4166;
}
