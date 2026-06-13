// fichero 9942 -- macros y constantes
#define LIMITE_9942 10042
#define FACTOR_9942 3

int aplicar_limite9942(int valor) {
    if (valor > LIMITE_9942) return LIMITE_9942;
    return valor * FACTOR_9942;
}
