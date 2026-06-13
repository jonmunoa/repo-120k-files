// fichero 32026 -- macros y constantes
#define LIMITE_32026 32126
#define FACTOR_32026 2

int aplicar_limite32026(int valor) {
    if (valor > LIMITE_32026) return LIMITE_32026;
    return valor * FACTOR_32026;
}
