// fichero 3894 -- macros y constantes
#define LIMITE_3894 3994
#define FACTOR_3894 5

int aplicar_limite3894(int valor) {
    if (valor > LIMITE_3894) return LIMITE_3894;
    return valor * FACTOR_3894;
}
