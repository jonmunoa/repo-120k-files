// fichero 50894 -- macros y constantes
#define LIMITE_50894 50994
#define FACTOR_50894 5

int aplicar_limite50894(int valor) {
    if (valor > LIMITE_50894) return LIMITE_50894;
    return valor * FACTOR_50894;
}
