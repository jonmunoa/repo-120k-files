// fichero 17006 -- macros y constantes -- MODIFICADO
#define LIMITE_17006 17206
#define FACTOR_17006 3

int aplicar_limite17006(int valor) {
    if (valor > LIMITE_17006) return LIMITE_17006;
    return valor * FACTOR_17006;
}
