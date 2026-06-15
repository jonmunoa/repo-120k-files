// fichero 26006 -- macros y constantes -- MODIFICADO
#define LIMITE_26006 26206
#define FACTOR_26006 3

int aplicar_limite26006(int valor) {
    if (valor > LIMITE_26006) return LIMITE_26006;
    return valor * FACTOR_26006;
}
