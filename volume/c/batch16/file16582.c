// fichero 16582 -- macros y constantes
#define LIMITE_16582 16682
#define FACTOR_16582 3

int aplicar_limite16582(int valor) {
    if (valor > LIMITE_16582) return LIMITE_16582;
    return valor * FACTOR_16582;
}
