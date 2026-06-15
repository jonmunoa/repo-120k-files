// fichero 7382 -- macros y constantes -- MODIFICADO
#define LIMITE_7382 7582
#define FACTOR_7382 4

int aplicar_limite7382(int valor) {
    if (valor > LIMITE_7382) return LIMITE_7382;
    return valor * FACTOR_7382;
}
