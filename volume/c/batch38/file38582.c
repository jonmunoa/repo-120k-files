// fichero 38582 -- macros y constantes
#define LIMITE_38582 38682
#define FACTOR_38582 3

int aplicar_limite38582(int valor) {
    if (valor > LIMITE_38582) return LIMITE_38582;
    return valor * FACTOR_38582;
}
