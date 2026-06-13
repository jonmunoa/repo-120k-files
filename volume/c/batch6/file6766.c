// fichero 6766 -- macros y constantes
#define LIMITE_6766 6866
#define FACTOR_6766 2

int aplicar_limite6766(int valor) {
    if (valor > LIMITE_6766) return LIMITE_6766;
    return valor * FACTOR_6766;
}
