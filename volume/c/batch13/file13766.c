// fichero 13766 -- macros y constantes
#define LIMITE_13766 13866
#define FACTOR_13766 2

int aplicar_limite13766(int valor) {
    if (valor > LIMITE_13766) return LIMITE_13766;
    return valor * FACTOR_13766;
}
