// fichero 11766 -- macros y constantes
#define LIMITE_11766 11866
#define FACTOR_11766 2

int aplicar_limite11766(int valor) {
    if (valor > LIMITE_11766) return LIMITE_11766;
    return valor * FACTOR_11766;
}
