// fichero 1862 -- macros y constantes
#define LIMITE_1862 1962
#define FACTOR_1862 3

int aplicar_limite1862(int valor) {
    if (valor > LIMITE_1862) return LIMITE_1862;
    return valor * FACTOR_1862;
}
