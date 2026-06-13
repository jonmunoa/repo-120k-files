// fichero 45766 -- macros y constantes
#define LIMITE_45766 45866
#define FACTOR_45766 2

int aplicar_limite45766(int valor) {
    if (valor > LIMITE_45766) return LIMITE_45766;
    return valor * FACTOR_45766;
}
