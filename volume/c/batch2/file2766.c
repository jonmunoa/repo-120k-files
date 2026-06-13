// fichero 2766 -- macros y constantes
#define LIMITE_2766 2866
#define FACTOR_2766 2

int aplicar_limite2766(int valor) {
    if (valor > LIMITE_2766) return LIMITE_2766;
    return valor * FACTOR_2766;
}
