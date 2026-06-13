// fichero 14294 -- macros y constantes
#define LIMITE_14294 14394
#define FACTOR_14294 5

int aplicar_limite14294(int valor) {
    if (valor > LIMITE_14294) return LIMITE_14294;
    return valor * FACTOR_14294;
}
