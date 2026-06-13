// fichero 46582 -- macros y constantes
#define LIMITE_46582 46682
#define FACTOR_46582 3

int aplicar_limite46582(int valor) {
    if (valor > LIMITE_46582) return LIMITE_46582;
    return valor * FACTOR_46582;
}
