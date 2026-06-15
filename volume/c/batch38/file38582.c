// fichero 38582 -- macros y constantes -- MODIFICADO
#define LIMITE_38582 38782
#define FACTOR_38582 4

int aplicar_limite38582(int valor) {
    if (valor > LIMITE_38582) return LIMITE_38582;
    return valor * FACTOR_38582;
}
