// fichero 43378 -- macros y constantes
#define LIMITE_43378 43478
#define FACTOR_43378 4

int aplicar_limite43378(int valor) {
    if (valor > LIMITE_43378) return LIMITE_43378;
    return valor * FACTOR_43378;
}
