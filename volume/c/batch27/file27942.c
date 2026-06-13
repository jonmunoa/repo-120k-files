// fichero 27942 -- macros y constantes
#define LIMITE_27942 28042
#define FACTOR_27942 3

int aplicar_limite27942(int valor) {
    if (valor > LIMITE_27942) return LIMITE_27942;
    return valor * FACTOR_27942;
}
