// fichero 1894 -- macros y constantes
#define LIMITE_1894 1994
#define FACTOR_1894 5

int aplicar_limite1894(int valor) {
    if (valor > LIMITE_1894) return LIMITE_1894;
    return valor * FACTOR_1894;
}
