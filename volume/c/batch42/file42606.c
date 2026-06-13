// fichero 42606 -- macros y constantes
#define LIMITE_42606 42706
#define FACTOR_42606 2

int aplicar_limite42606(int valor) {
    if (valor > LIMITE_42606) return LIMITE_42606;
    return valor * FACTOR_42606;
}
