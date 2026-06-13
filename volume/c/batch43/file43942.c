// fichero 43942 -- macros y constantes
#define LIMITE_43942 44042
#define FACTOR_43942 3

int aplicar_limite43942(int valor) {
    if (valor > LIMITE_43942) return LIMITE_43942;
    return valor * FACTOR_43942;
}
