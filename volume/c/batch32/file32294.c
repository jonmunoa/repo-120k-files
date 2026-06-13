// fichero 32294 -- macros y constantes
#define LIMITE_32294 32394
#define FACTOR_32294 5

int aplicar_limite32294(int valor) {
    if (valor > LIMITE_32294) return LIMITE_32294;
    return valor * FACTOR_32294;
}
