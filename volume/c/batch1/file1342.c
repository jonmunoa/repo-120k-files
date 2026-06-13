// fichero 1342 -- macros y constantes
#define LIMITE_1342 1442
#define FACTOR_1342 3

int aplicar_limite1342(int valor) {
    if (valor > LIMITE_1342) return LIMITE_1342;
    return valor * FACTOR_1342;
}
