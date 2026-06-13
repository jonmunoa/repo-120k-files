// fichero 11246 -- macros y constantes
#define LIMITE_11246 11346
#define FACTOR_11246 2

int aplicar_limite11246(int valor) {
    if (valor > LIMITE_11246) return LIMITE_11246;
    return valor * FACTOR_11246;
}
