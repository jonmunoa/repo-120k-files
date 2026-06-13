// fichero 5582 -- macros y constantes
#define LIMITE_5582 5682
#define FACTOR_5582 3

int aplicar_limite5582(int valor) {
    if (valor > LIMITE_5582) return LIMITE_5582;
    return valor * FACTOR_5582;
}
