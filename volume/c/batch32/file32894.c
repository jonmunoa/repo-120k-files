// fichero 32894 -- macros y constantes
#define LIMITE_32894 32994
#define FACTOR_32894 5

int aplicar_limite32894(int valor) {
    if (valor > LIMITE_32894) return LIMITE_32894;
    return valor * FACTOR_32894;
}
