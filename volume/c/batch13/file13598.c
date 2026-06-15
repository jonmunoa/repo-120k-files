// fichero 13598 -- macros y constantes -- MODIFICADO
#define LIMITE_13598 13798
#define FACTOR_13598 5

int aplicar_limite13598(int valor) {
    if (valor > LIMITE_13598) return LIMITE_13598;
    return valor * FACTOR_13598;
}
