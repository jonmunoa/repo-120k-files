// fichero 2942 -- macros y constantes
#define LIMITE_2942 3042
#define FACTOR_2942 3

int aplicar_limite2942(int valor) {
    if (valor > LIMITE_2942) return LIMITE_2942;
    return valor * FACTOR_2942;
}
