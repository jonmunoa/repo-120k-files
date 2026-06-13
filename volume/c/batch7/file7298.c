// fichero 7298 -- macros y constantes
#define LIMITE_7298 7398
#define FACTOR_7298 4

int aplicar_limite7298(int valor) {
    if (valor > LIMITE_7298) return LIMITE_7298;
    return valor * FACTOR_7298;
}
