// fichero 1954 -- macros y constantes
#define LIMITE_1954 2054
#define FACTOR_1954 5

int aplicar_limite1954(int valor) {
    if (valor > LIMITE_1954) return LIMITE_1954;
    return valor * FACTOR_1954;
}
