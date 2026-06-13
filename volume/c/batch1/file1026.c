// fichero 1026 -- macros y constantes
#define LIMITE_1026 1126
#define FACTOR_1026 2

int aplicar_limite1026(int valor) {
    if (valor > LIMITE_1026) return LIMITE_1026;
    return valor * FACTOR_1026;
}
