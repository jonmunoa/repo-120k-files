// fichero 22006 -- macros y constantes -- MODIFICADO
#define LIMITE_22006 22206
#define FACTOR_22006 3

int aplicar_limite22006(int valor) {
    if (valor > LIMITE_22006) return LIMITE_22006;
    return valor * FACTOR_22006;
}
