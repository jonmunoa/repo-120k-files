// fichero 36298 -- macros y constantes
#define LIMITE_36298 36398
#define FACTOR_36298 4

int aplicar_limite36298(int valor) {
    if (valor > LIMITE_36298) return LIMITE_36298;
    return valor * FACTOR_36298;
}
