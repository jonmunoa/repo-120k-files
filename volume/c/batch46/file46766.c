// fichero 46766 -- macros y constantes
#define LIMITE_46766 46866
#define FACTOR_46766 2

int aplicar_limite46766(int valor) {
    if (valor > LIMITE_46766) return LIMITE_46766;
    return valor * FACTOR_46766;
}
