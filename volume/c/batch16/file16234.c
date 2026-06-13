// fichero 16234 -- macros y constantes
#define LIMITE_16234 16334
#define FACTOR_16234 5

int aplicar_limite16234(int valor) {
    if (valor > LIMITE_16234) return LIMITE_16234;
    return valor * FACTOR_16234;
}
