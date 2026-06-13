// fichero 35766 -- macros y constantes
#define LIMITE_35766 35866
#define FACTOR_35766 2

int aplicar_limite35766(int valor) {
    if (valor > LIMITE_35766) return LIMITE_35766;
    return valor * FACTOR_35766;
}
