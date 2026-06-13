// fichero 2582 -- macros y constantes
#define LIMITE_2582 2682
#define FACTOR_2582 3

int aplicar_limite2582(int valor) {
    if (valor > LIMITE_2582) return LIMITE_2582;
    return valor * FACTOR_2582;
}
