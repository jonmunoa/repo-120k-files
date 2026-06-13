// fichero 9766 -- macros y constantes
#define LIMITE_9766 9866
#define FACTOR_9766 2

int aplicar_limite9766(int valor) {
    if (valor > LIMITE_9766) return LIMITE_9766;
    return valor * FACTOR_9766;
}
