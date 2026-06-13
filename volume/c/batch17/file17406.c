// fichero 17406 -- macros y constantes
#define LIMITE_17406 17506
#define FACTOR_17406 2

int aplicar_limite17406(int valor) {
    if (valor > LIMITE_17406) return LIMITE_17406;
    return valor * FACTOR_17406;
}
