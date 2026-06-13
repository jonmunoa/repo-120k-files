// fichero 16670 -- macros y constantes
#define LIMITE_16670 16770
#define FACTOR_16670 1

int aplicar_limite16670(int valor) {
    if (valor > LIMITE_16670) return LIMITE_16670;
    return valor * FACTOR_16670;
}
