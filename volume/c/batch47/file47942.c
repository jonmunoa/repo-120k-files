// fichero 47942 -- macros y constantes
#define LIMITE_47942 48042
#define FACTOR_47942 3

int aplicar_limite47942(int valor) {
    if (valor > LIMITE_47942) return LIMITE_47942;
    return valor * FACTOR_47942;
}
