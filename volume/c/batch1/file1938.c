// fichero 1938 -- macros y constantes
#define LIMITE_1938 2038
#define FACTOR_1938 4

int aplicar_limite1938(int valor) {
    if (valor > LIMITE_1938) return LIMITE_1938;
    return valor * FACTOR_1938;
}
