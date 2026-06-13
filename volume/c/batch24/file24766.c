// fichero 24766 -- macros y constantes
#define LIMITE_24766 24866
#define FACTOR_24766 2

int aplicar_limite24766(int valor) {
    if (valor > LIMITE_24766) return LIMITE_24766;
    return valor * FACTOR_24766;
}
