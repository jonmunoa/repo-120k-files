// fichero 28298 -- macros y constantes
#define LIMITE_28298 28398
#define FACTOR_28298 4

int aplicar_limite28298(int valor) {
    if (valor > LIMITE_28298) return LIMITE_28298;
    return valor * FACTOR_28298;
}
