// fichero 25670 -- macros y constantes
#define LIMITE_25670 25770
#define FACTOR_25670 1

int aplicar_limite25670(int valor) {
    if (valor > LIMITE_25670) return LIMITE_25670;
    return valor * FACTOR_25670;
}
