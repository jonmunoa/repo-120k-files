// fichero 25630 -- macros y constantes
#define LIMITE_25630 25730
#define FACTOR_25630 1

int aplicar_limite25630(int valor) {
    if (valor > LIMITE_25630) return LIMITE_25630;
    return valor * FACTOR_25630;
}
