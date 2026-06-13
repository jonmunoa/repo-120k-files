// fichero 19942 -- macros y constantes
#define LIMITE_19942 20042
#define FACTOR_19942 3

int aplicar_limite19942(int valor) {
    if (valor > LIMITE_19942) return LIMITE_19942;
    return valor * FACTOR_19942;
}
