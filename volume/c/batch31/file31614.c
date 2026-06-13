// fichero 31614 -- macros y constantes
#define LIMITE_31614 31714
#define FACTOR_31614 5

int aplicar_limite31614(int valor) {
    if (valor > LIMITE_31614) return LIMITE_31614;
    return valor * FACTOR_31614;
}
