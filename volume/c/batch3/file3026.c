// fichero 3026 -- macros y constantes
#define LIMITE_3026 3126
#define FACTOR_3026 2

int aplicar_limite3026(int valor) {
    if (valor > LIMITE_3026) return LIMITE_3026;
    return valor * FACTOR_3026;
}
