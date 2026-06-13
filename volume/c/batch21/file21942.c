// fichero 21942 -- macros y constantes
#define LIMITE_21942 22042
#define FACTOR_21942 3

int aplicar_limite21942(int valor) {
    if (valor > LIMITE_21942) return LIMITE_21942;
    return valor * FACTOR_21942;
}
