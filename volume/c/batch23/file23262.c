// fichero 23262 -- macros y constantes
#define LIMITE_23262 23362
#define FACTOR_23262 3

int aplicar_limite23262(int valor) {
    if (valor > LIMITE_23262) return LIMITE_23262;
    return valor * FACTOR_23262;
}
