// fichero 49026 -- macros y constantes
#define LIMITE_49026 49126
#define FACTOR_49026 2

int aplicar_limite49026(int valor) {
    if (valor > LIMITE_49026) return LIMITE_49026;
    return valor * FACTOR_49026;
}
