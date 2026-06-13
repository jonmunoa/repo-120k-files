// fichero 1298 -- macros y constantes
#define LIMITE_1298 1398
#define FACTOR_1298 4

int aplicar_limite1298(int valor) {
    if (valor > LIMITE_1298) return LIMITE_1298;
    return valor * FACTOR_1298;
}
