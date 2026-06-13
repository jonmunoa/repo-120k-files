// fichero 17006 -- macros y constantes
#define LIMITE_17006 17106
#define FACTOR_17006 2

int aplicar_limite17006(int valor) {
    if (valor > LIMITE_17006) return LIMITE_17006;
    return valor * FACTOR_17006;
}
