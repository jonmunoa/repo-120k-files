// fichero 18434 -- macros y constantes
#define LIMITE_18434 18534
#define FACTOR_18434 5

int aplicar_limite18434(int valor) {
    if (valor > LIMITE_18434) return LIMITE_18434;
    return valor * FACTOR_18434;
}
