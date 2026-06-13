// fichero 298 -- macros y constantes
#define LIMITE_298 398
#define FACTOR_298 4

int aplicar_limite298(int valor) {
    if (valor > LIMITE_298) return LIMITE_298;
    return valor * FACTOR_298;
}
