// fichero 18766 -- macros y constantes
#define LIMITE_18766 18866
#define FACTOR_18766 2

int aplicar_limite18766(int valor) {
    if (valor > LIMITE_18766) return LIMITE_18766;
    return valor * FACTOR_18766;
}
