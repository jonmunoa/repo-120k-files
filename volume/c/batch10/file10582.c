// fichero 10582 -- macros y constantes
#define LIMITE_10582 10682
#define FACTOR_10582 3

int aplicar_limite10582(int valor) {
    if (valor > LIMITE_10582) return LIMITE_10582;
    return valor * FACTOR_10582;
}
