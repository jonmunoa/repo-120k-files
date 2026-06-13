// fichero 23026 -- macros y constantes
#define LIMITE_23026 23126
#define FACTOR_23026 2

int aplicar_limite23026(int valor) {
    if (valor > LIMITE_23026) return LIMITE_23026;
    return valor * FACTOR_23026;
}
