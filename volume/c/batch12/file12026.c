// fichero 12026 -- macros y constantes
#define LIMITE_12026 12126
#define FACTOR_12026 2

int aplicar_limite12026(int valor) {
    if (valor > LIMITE_12026) return LIMITE_12026;
    return valor * FACTOR_12026;
}
