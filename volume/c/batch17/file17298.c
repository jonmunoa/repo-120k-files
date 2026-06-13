// fichero 17298 -- macros y constantes
#define LIMITE_17298 17398
#define FACTOR_17298 4

int aplicar_limite17298(int valor) {
    if (valor > LIMITE_17298) return LIMITE_17298;
    return valor * FACTOR_17298;
}
