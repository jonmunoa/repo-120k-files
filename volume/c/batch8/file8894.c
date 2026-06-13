// fichero 8894 -- macros y constantes
#define LIMITE_8894 8994
#define FACTOR_8894 5

int aplicar_limite8894(int valor) {
    if (valor > LIMITE_8894) return LIMITE_8894;
    return valor * FACTOR_8894;
}
