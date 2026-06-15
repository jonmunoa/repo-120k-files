// fichero 1298 -- macros y constantes -- MODIFICADO
#define LIMITE_1298 1498
#define FACTOR_1298 5

int aplicar_limite1298(int valor) {
    if (valor > LIMITE_1298) return LIMITE_1298;
    return valor * FACTOR_1298;
}
