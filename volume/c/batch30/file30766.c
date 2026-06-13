// fichero 30766 -- macros y constantes
#define LIMITE_30766 30866
#define FACTOR_30766 2

int aplicar_limite30766(int valor) {
    if (valor > LIMITE_30766) return LIMITE_30766;
    return valor * FACTOR_30766;
}
