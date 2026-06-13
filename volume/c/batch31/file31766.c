// fichero 31766 -- macros y constantes
#define LIMITE_31766 31866
#define FACTOR_31766 2

int aplicar_limite31766(int valor) {
    if (valor > LIMITE_31766) return LIMITE_31766;
    return valor * FACTOR_31766;
}
