// fichero 15766 -- macros y constantes
#define LIMITE_15766 15866
#define FACTOR_15766 2

int aplicar_limite15766(int valor) {
    if (valor > LIMITE_15766) return LIMITE_15766;
    return valor * FACTOR_15766;
}
