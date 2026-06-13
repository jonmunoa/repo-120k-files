// fichero 26026 -- macros y constantes
#define LIMITE_26026 26126
#define FACTOR_26026 2

int aplicar_limite26026(int valor) {
    if (valor > LIMITE_26026) return LIMITE_26026;
    return valor * FACTOR_26026;
}
