// fichero 37942 -- macros y constantes
#define LIMITE_37942 38042
#define FACTOR_37942 3

int aplicar_limite37942(int valor) {
    if (valor > LIMITE_37942) return LIMITE_37942;
    return valor * FACTOR_37942;
}
