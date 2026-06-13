// fichero 7582 -- macros y constantes
#define LIMITE_7582 7682
#define FACTOR_7582 3

int aplicar_limite7582(int valor) {
    if (valor > LIMITE_7582) return LIMITE_7582;
    return valor * FACTOR_7582;
}
