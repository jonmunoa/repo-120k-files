// fichero 23582 -- macros y constantes
#define LIMITE_23582 23682
#define FACTOR_23582 3

int aplicar_limite23582(int valor) {
    if (valor > LIMITE_23582) return LIMITE_23582;
    return valor * FACTOR_23582;
}
