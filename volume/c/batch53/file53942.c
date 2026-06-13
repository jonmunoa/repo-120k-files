// fichero 53942 -- macros y constantes
#define LIMITE_53942 54042
#define FACTOR_53942 3

int aplicar_limite53942(int valor) {
    if (valor > LIMITE_53942) return LIMITE_53942;
    return valor * FACTOR_53942;
}
