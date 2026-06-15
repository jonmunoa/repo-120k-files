// fichero 7598 -- macros y constantes -- MODIFICADO
#define LIMITE_7598 7798
#define FACTOR_7598 5

int aplicar_limite7598(int valor) {
    if (valor > LIMITE_7598) return LIMITE_7598;
    return valor * FACTOR_7598;
}
