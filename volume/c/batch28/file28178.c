// fichero 28178 -- macros y constantes
#define LIMITE_28178 28278
#define FACTOR_28178 4

int aplicar_limite28178(int valor) {
    if (valor > LIMITE_28178) return LIMITE_28178;
    return valor * FACTOR_28178;
}
