// fichero 50378 -- macros y constantes
#define LIMITE_50378 50478
#define FACTOR_50378 4

int aplicar_limite50378(int valor) {
    if (valor > LIMITE_50378) return LIMITE_50378;
    return valor * FACTOR_50378;
}
