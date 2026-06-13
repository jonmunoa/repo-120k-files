// fichero 52942 -- macros y constantes
#define LIMITE_52942 53042
#define FACTOR_52942 3

int aplicar_limite52942(int valor) {
    if (valor > LIMITE_52942) return LIMITE_52942;
    return valor * FACTOR_52942;
}
