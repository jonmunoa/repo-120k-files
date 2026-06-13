// fichero 17582 -- macros y constantes
#define LIMITE_17582 17682
#define FACTOR_17582 3

int aplicar_limite17582(int valor) {
    if (valor > LIMITE_17582) return LIMITE_17582;
    return valor * FACTOR_17582;
}
