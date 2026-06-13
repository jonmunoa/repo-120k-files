// fichero 3766 -- macros y constantes
#define LIMITE_3766 3866
#define FACTOR_3766 2

int aplicar_limite3766(int valor) {
    if (valor > LIMITE_3766) return LIMITE_3766;
    return valor * FACTOR_3766;
}
