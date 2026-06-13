// fichero 16766 -- macros y constantes
#define LIMITE_16766 16866
#define FACTOR_16766 2

int aplicar_limite16766(int valor) {
    if (valor > LIMITE_16766) return LIMITE_16766;
    return valor * FACTOR_16766;
}
