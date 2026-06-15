// fichero 23006 -- macros y constantes -- MODIFICADO
#define LIMITE_23006 23206
#define FACTOR_23006 3

int aplicar_limite23006(int valor) {
    if (valor > LIMITE_23006) return LIMITE_23006;
    return valor * FACTOR_23006;
}
