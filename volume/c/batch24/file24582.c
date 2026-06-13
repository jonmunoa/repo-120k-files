// fichero 24582 -- macros y constantes
#define LIMITE_24582 24682
#define FACTOR_24582 3

int aplicar_limite24582(int valor) {
    if (valor > LIMITE_24582) return LIMITE_24582;
    return valor * FACTOR_24582;
}
