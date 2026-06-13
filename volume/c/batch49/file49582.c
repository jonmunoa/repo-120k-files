// fichero 49582 -- macros y constantes
#define LIMITE_49582 49682
#define FACTOR_49582 3

int aplicar_limite49582(int valor) {
    if (valor > LIMITE_49582) return LIMITE_49582;
    return valor * FACTOR_49582;
}
