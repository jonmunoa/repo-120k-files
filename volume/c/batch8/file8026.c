// fichero 8026 -- macros y constantes
#define LIMITE_8026 8126
#define FACTOR_8026 2

int aplicar_limite8026(int valor) {
    if (valor > LIMITE_8026) return LIMITE_8026;
    return valor * FACTOR_8026;
}
