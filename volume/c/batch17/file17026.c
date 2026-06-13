// fichero 17026 -- macros y constantes
#define LIMITE_17026 17126
#define FACTOR_17026 2

int aplicar_limite17026(int valor) {
    if (valor > LIMITE_17026) return LIMITE_17026;
    return valor * FACTOR_17026;
}
