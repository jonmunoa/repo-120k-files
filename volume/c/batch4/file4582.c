// fichero 4582 -- macros y constantes
#define LIMITE_4582 4682
#define FACTOR_4582 3

int aplicar_limite4582(int valor) {
    if (valor > LIMITE_4582) return LIMITE_4582;
    return valor * FACTOR_4582;
}
