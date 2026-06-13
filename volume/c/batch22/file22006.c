// fichero 22006 -- macros y constantes
#define LIMITE_22006 22106
#define FACTOR_22006 2

int aplicar_limite22006(int valor) {
    if (valor > LIMITE_22006) return LIMITE_22006;
    return valor * FACTOR_22006;
}
