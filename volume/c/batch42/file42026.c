// fichero 42026 -- macros y constantes
#define LIMITE_42026 42126
#define FACTOR_42026 2

int aplicar_limite42026(int valor) {
    if (valor > LIMITE_42026) return LIMITE_42026;
    return valor * FACTOR_42026;
}
