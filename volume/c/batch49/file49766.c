// fichero 49766 -- macros y constantes
#define LIMITE_49766 49866
#define FACTOR_49766 2

int aplicar_limite49766(int valor) {
    if (valor > LIMITE_49766) return LIMITE_49766;
    return valor * FACTOR_49766;
}
