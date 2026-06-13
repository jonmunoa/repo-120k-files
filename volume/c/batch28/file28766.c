// fichero 28766 -- macros y constantes
#define LIMITE_28766 28866
#define FACTOR_28766 2

int aplicar_limite28766(int valor) {
    if (valor > LIMITE_28766) return LIMITE_28766;
    return valor * FACTOR_28766;
}
