// fichero 1826 -- macros y constantes
#define LIMITE_1826 1926
#define FACTOR_1826 2

int aplicar_limite1826(int valor) {
    if (valor > LIMITE_1826) return LIMITE_1826;
    return valor * FACTOR_1826;
}
