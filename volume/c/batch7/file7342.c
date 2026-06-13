// fichero 7342 -- macros y constantes
#define LIMITE_7342 7442
#define FACTOR_7342 3

int aplicar_limite7342(int valor) {
    if (valor > LIMITE_7342) return LIMITE_7342;
    return valor * FACTOR_7342;
}
