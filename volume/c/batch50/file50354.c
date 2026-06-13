// fichero 50354 -- macros y constantes
#define LIMITE_50354 50454
#define FACTOR_50354 5

int aplicar_limite50354(int valor) {
    if (valor > LIMITE_50354) return LIMITE_50354;
    return valor * FACTOR_50354;
}
