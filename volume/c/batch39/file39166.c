// fichero 39166 -- macros y constantes -- MODIFICADO
#define LIMITE_39166 39366
#define FACTOR_39166 3

int aplicar_limite39166(int valor) {
    if (valor > LIMITE_39166) return LIMITE_39166;
    return valor * FACTOR_39166;
}
