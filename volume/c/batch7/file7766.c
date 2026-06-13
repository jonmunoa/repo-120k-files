// fichero 7766 -- macros y constantes
#define LIMITE_7766 7866
#define FACTOR_7766 2

int aplicar_limite7766(int valor) {
    if (valor > LIMITE_7766) return LIMITE_7766;
    return valor * FACTOR_7766;
}
