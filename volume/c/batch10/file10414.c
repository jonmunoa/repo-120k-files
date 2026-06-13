// fichero 10414 -- macros y constantes
#define LIMITE_10414 10514
#define FACTOR_10414 5

int aplicar_limite10414(int valor) {
    if (valor > LIMITE_10414) return LIMITE_10414;
    return valor * FACTOR_10414;
}
