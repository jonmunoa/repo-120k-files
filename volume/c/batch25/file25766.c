// fichero 25766 -- macros y constantes
#define LIMITE_25766 25866
#define FACTOR_25766 2

int aplicar_limite25766(int valor) {
    if (valor > LIMITE_25766) return LIMITE_25766;
    return valor * FACTOR_25766;
}
