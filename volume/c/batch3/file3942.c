// fichero 3942 -- macros y constantes
#define LIMITE_3942 4042
#define FACTOR_3942 3

int aplicar_limite3942(int valor) {
    if (valor > LIMITE_3942) return LIMITE_3942;
    return valor * FACTOR_3942;
}
