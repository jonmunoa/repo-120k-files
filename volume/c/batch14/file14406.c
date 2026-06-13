// fichero 14406 -- macros y constantes
#define LIMITE_14406 14506
#define FACTOR_14406 2

int aplicar_limite14406(int valor) {
    if (valor > LIMITE_14406) return LIMITE_14406;
    return valor * FACTOR_14406;
}
