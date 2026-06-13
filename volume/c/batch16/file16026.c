// fichero 16026 -- macros y constantes
#define LIMITE_16026 16126
#define FACTOR_16026 2

int aplicar_limite16026(int valor) {
    if (valor > LIMITE_16026) return LIMITE_16026;
    return valor * FACTOR_16026;
}
