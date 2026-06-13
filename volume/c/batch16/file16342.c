// fichero 16342 -- macros y constantes
#define LIMITE_16342 16442
#define FACTOR_16342 3

int aplicar_limite16342(int valor) {
    if (valor > LIMITE_16342) return LIMITE_16342;
    return valor * FACTOR_16342;
}
