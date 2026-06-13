// fichero 50766 -- macros y constantes
#define LIMITE_50766 50866
#define FACTOR_50766 2

int aplicar_limite50766(int valor) {
    if (valor > LIMITE_50766) return LIMITE_50766;
    return valor * FACTOR_50766;
}
