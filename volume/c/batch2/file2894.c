// fichero 2894 -- macros y constantes
#define LIMITE_2894 2994
#define FACTOR_2894 5

int aplicar_limite2894(int valor) {
    if (valor > LIMITE_2894) return LIMITE_2894;
    return valor * FACTOR_2894;
}
