// fichero 22026 -- macros y constantes
#define LIMITE_22026 22126
#define FACTOR_22026 2

int aplicar_limite22026(int valor) {
    if (valor > LIMITE_22026) return LIMITE_22026;
    return valor * FACTOR_22026;
}
