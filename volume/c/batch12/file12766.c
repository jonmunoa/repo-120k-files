// fichero 12766 -- macros y constantes
#define LIMITE_12766 12866
#define FACTOR_12766 2

int aplicar_limite12766(int valor) {
    if (valor > LIMITE_12766) return LIMITE_12766;
    return valor * FACTOR_12766;
}
