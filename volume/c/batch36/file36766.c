// fichero 36766 -- macros y constantes
#define LIMITE_36766 36866
#define FACTOR_36766 2

int aplicar_limite36766(int valor) {
    if (valor > LIMITE_36766) return LIMITE_36766;
    return valor * FACTOR_36766;
}
