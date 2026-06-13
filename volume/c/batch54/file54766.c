// fichero 54766 -- macros y constantes
#define LIMITE_54766 54866
#define FACTOR_54766 2

int aplicar_limite54766(int valor) {
    if (valor > LIMITE_54766) return LIMITE_54766;
    return valor * FACTOR_54766;
}
