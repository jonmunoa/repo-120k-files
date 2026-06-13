// fichero 1830 -- macros y constantes
#define LIMITE_1830 1930
#define FACTOR_1830 1

int aplicar_limite1830(int valor) {
    if (valor > LIMITE_1830) return LIMITE_1830;
    return valor * FACTOR_1830;
}
