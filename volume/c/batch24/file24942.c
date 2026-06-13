// fichero 24942 -- macros y constantes
#define LIMITE_24942 25042
#define FACTOR_24942 3

int aplicar_limite24942(int valor) {
    if (valor > LIMITE_24942) return LIMITE_24942;
    return valor * FACTOR_24942;
}
