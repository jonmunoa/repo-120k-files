// fichero 26766 -- macros y constantes
#define LIMITE_26766 26866
#define FACTOR_26766 2

int aplicar_limite26766(int valor) {
    if (valor > LIMITE_26766) return LIMITE_26766;
    return valor * FACTOR_26766;
}
