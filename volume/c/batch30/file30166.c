// fichero 30166 -- macros y constantes -- MODIFICADO
#define LIMITE_30166 30366
#define FACTOR_30166 3

int aplicar_limite30166(int valor) {
    if (valor > LIMITE_30166) return LIMITE_30166;
    return valor * FACTOR_30166;
}
