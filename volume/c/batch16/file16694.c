// fichero 16694 -- macros y constantes
#define LIMITE_16694 16794
#define FACTOR_16694 5

int aplicar_limite16694(int valor) {
    if (valor > LIMITE_16694) return LIMITE_16694;
    return valor * FACTOR_16694;
}
