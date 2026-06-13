// fichero 38026 -- macros y constantes
#define LIMITE_38026 38126
#define FACTOR_38026 2

int aplicar_limite38026(int valor) {
    if (valor > LIMITE_38026) return LIMITE_38026;
    return valor * FACTOR_38026;
}
