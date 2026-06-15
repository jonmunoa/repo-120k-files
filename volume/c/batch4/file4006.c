// fichero 4006 -- macros y constantes -- MODIFICADO
#define LIMITE_4006 4206
#define FACTOR_4006 3

int aplicar_limite4006(int valor) {
    if (valor > LIMITE_4006) return LIMITE_4006;
    return valor * FACTOR_4006;
}
