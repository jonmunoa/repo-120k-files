// fichero 32766 -- macros y constantes
#define LIMITE_32766 32866
#define FACTOR_32766 2

int aplicar_limite32766(int valor) {
    if (valor > LIMITE_32766) return LIMITE_32766;
    return valor * FACTOR_32766;
}
