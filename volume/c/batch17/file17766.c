// fichero 17766 -- macros y constantes
#define LIMITE_17766 17866
#define FACTOR_17766 2

int aplicar_limite17766(int valor) {
    if (valor > LIMITE_17766) return LIMITE_17766;
    return valor * FACTOR_17766;
}
