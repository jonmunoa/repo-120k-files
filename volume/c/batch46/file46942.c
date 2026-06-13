// fichero 46942 -- macros y constantes
#define LIMITE_46942 47042
#define FACTOR_46942 3

int aplicar_limite46942(int valor) {
    if (valor > LIMITE_46942) return LIMITE_46942;
    return valor * FACTOR_46942;
}
