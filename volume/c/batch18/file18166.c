// fichero 18166 -- macros y constantes -- MODIFICADO
#define LIMITE_18166 18366
#define FACTOR_18166 3

int aplicar_limite18166(int valor) {
    if (valor > LIMITE_18166) return LIMITE_18166;
    return valor * FACTOR_18166;
}
