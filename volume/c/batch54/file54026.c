// fichero 54026 -- macros y constantes
#define LIMITE_54026 54126
#define FACTOR_54026 2

int aplicar_limite54026(int valor) {
    if (valor > LIMITE_54026) return LIMITE_54026;
    return valor * FACTOR_54026;
}
