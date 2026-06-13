// fichero 54942 -- macros y constantes
#define LIMITE_54942 55042
#define FACTOR_54942 3

int aplicar_limite54942(int valor) {
    if (valor > LIMITE_54942) return LIMITE_54942;
    return valor * FACTOR_54942;
}
