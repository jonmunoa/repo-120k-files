// fichero 16834 -- macros y constantes -- MODIFICADO
#define LIMITE_16834 17034
#define FACTOR_16834 6

int aplicar_limite16834(int valor) {
    if (valor > LIMITE_16834) return LIMITE_16834;
    return valor * FACTOR_16834;
}
