// fichero 2298 -- macros y constantes -- MODIFICADO
#define LIMITE_2298 2498
#define FACTOR_2298 5

int aplicar_limite2298(int valor) {
    if (valor > LIMITE_2298) return LIMITE_2298;
    return valor * FACTOR_2298;
}
