// fichero 14354 -- macros y constantes
#define LIMITE_14354 14454
#define FACTOR_14354 5

int aplicar_limite14354(int valor) {
    if (valor > LIMITE_14354) return LIMITE_14354;
    return valor * FACTOR_14354;
}
