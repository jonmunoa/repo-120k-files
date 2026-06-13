// fichero 16834 -- macros y constantes
#define LIMITE_16834 16934
#define FACTOR_16834 5

int aplicar_limite16834(int valor) {
    if (valor > LIMITE_16834) return LIMITE_16834;
    return valor * FACTOR_16834;
}
