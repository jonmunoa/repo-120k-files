// fichero 7598 -- macros y constantes
#define LIMITE_7598 7698
#define FACTOR_7598 4

int aplicar_limite7598(int valor) {
    if (valor > LIMITE_7598) return LIMITE_7598;
    return valor * FACTOR_7598;
}
