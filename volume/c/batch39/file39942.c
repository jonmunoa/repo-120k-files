// fichero 39942 -- macros y constantes
#define LIMITE_39942 40042
#define FACTOR_39942 3

int aplicar_limite39942(int valor) {
    if (valor > LIMITE_39942) return LIMITE_39942;
    return valor * FACTOR_39942;
}
