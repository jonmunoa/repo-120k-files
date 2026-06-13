// fichero 16406 -- macros y constantes
#define LIMITE_16406 16506
#define FACTOR_16406 2

int aplicar_limite16406(int valor) {
    if (valor > LIMITE_16406) return LIMITE_16406;
    return valor * FACTOR_16406;
}
