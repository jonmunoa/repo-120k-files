// fichero 23006 -- macros y constantes
#define LIMITE_23006 23106
#define FACTOR_23006 2

int aplicar_limite23006(int valor) {
    if (valor > LIMITE_23006) return LIMITE_23006;
    return valor * FACTOR_23006;
}
