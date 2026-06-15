// fichero 28178 -- macros y constantes -- MODIFICADO
#define LIMITE_28178 28378
#define FACTOR_28178 5

int aplicar_limite28178(int valor) {
    if (valor > LIMITE_28178) return LIMITE_28178;
    return valor * FACTOR_28178;
}
