// fichero 1766 -- macros y constantes
#define LIMITE_1766 1866
#define FACTOR_1766 2

int aplicar_limite1766(int valor) {
    if (valor > LIMITE_1766) return LIMITE_1766;
    return valor * FACTOR_1766;
}
