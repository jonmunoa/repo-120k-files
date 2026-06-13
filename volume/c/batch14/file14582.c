// fichero 14582 -- macros y constantes
#define LIMITE_14582 14682
#define FACTOR_14582 3

int aplicar_limite14582(int valor) {
    if (valor > LIMITE_14582) return LIMITE_14582;
    return valor * FACTOR_14582;
}
