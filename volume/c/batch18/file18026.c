// fichero 18026 -- macros y constantes
#define LIMITE_18026 18126
#define FACTOR_18026 2

int aplicar_limite18026(int valor) {
    if (valor > LIMITE_18026) return LIMITE_18026;
    return valor * FACTOR_18026;
}
