// fichero 23766 -- macros y constantes
#define LIMITE_23766 23866
#define FACTOR_23766 2

int aplicar_limite23766(int valor) {
    if (valor > LIMITE_23766) return LIMITE_23766;
    return valor * FACTOR_23766;
}
