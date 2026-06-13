// fichero 5766 -- macros y constantes
#define LIMITE_5766 5866
#define FACTOR_5766 2

int aplicar_limite5766(int valor) {
    if (valor > LIMITE_5766) return LIMITE_5766;
    return valor * FACTOR_5766;
}
