// fichero 18894 -- macros y constantes
#define LIMITE_18894 18994
#define FACTOR_18894 5

int aplicar_limite18894(int valor) {
    if (valor > LIMITE_18894) return LIMITE_18894;
    return valor * FACTOR_18894;
}
