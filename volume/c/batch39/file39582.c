// fichero 39582 -- macros y constantes
#define LIMITE_39582 39682
#define FACTOR_39582 3

int aplicar_limite39582(int valor) {
    if (valor > LIMITE_39582) return LIMITE_39582;
    return valor * FACTOR_39582;
}
