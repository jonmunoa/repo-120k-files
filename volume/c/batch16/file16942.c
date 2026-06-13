// fichero 16942 -- macros y constantes
#define LIMITE_16942 17042
#define FACTOR_16942 3

int aplicar_limite16942(int valor) {
    if (valor > LIMITE_16942) return LIMITE_16942;
    return valor * FACTOR_16942;
}
