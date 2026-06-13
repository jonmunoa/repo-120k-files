// fichero 12378 -- macros y constantes
#define LIMITE_12378 12478
#define FACTOR_12378 4

int aplicar_limite12378(int valor) {
    if (valor > LIMITE_12378) return LIMITE_12378;
    return valor * FACTOR_12378;
}
