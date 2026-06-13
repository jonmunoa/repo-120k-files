// fichero 10026 -- macros y constantes
#define LIMITE_10026 10126
#define FACTOR_10026 2

int aplicar_limite10026(int valor) {
    if (valor > LIMITE_10026) return LIMITE_10026;
    return valor * FACTOR_10026;
}
