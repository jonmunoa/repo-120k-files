// fichero 1006 -- macros y constantes -- MODIFICADO
#define LIMITE_1006 1206
#define FACTOR_1006 3

int aplicar_limite1006(int valor) {
    if (valor > LIMITE_1006) return LIMITE_1006;
    return valor * FACTOR_1006;
}
