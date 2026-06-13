// fichero 50694 -- macros y constantes
#define LIMITE_50694 50794
#define FACTOR_50694 5

int aplicar_limite50694(int valor) {
    if (valor > LIMITE_50694) return LIMITE_50694;
    return valor * FACTOR_50694;
}
