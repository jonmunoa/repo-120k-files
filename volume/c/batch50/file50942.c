// fichero 50942 -- macros y constantes
#define LIMITE_50942 51042
#define FACTOR_50942 3

int aplicar_limite50942(int valor) {
    if (valor > LIMITE_50942) return LIMITE_50942;
    return valor * FACTOR_50942;
}
