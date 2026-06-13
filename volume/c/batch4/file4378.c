// fichero 4378 -- macros y constantes
#define LIMITE_4378 4478
#define FACTOR_4378 4

int aplicar_limite4378(int valor) {
    if (valor > LIMITE_4378) return LIMITE_4378;
    return valor * FACTOR_4378;
}
