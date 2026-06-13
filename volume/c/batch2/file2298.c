// fichero 2298 -- macros y constantes
#define LIMITE_2298 2398
#define FACTOR_2298 4

int aplicar_limite2298(int valor) {
    if (valor > LIMITE_2298) return LIMITE_2298;
    return valor * FACTOR_2298;
}
