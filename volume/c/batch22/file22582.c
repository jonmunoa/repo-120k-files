// fichero 22582 -- macros y constantes
#define LIMITE_22582 22682
#define FACTOR_22582 3

int aplicar_limite22582(int valor) {
    if (valor > LIMITE_22582) return LIMITE_22582;
    return valor * FACTOR_22582;
}
