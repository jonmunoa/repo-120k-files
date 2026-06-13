// fichero 18298 -- macros y constantes
#define LIMITE_18298 18398
#define FACTOR_18298 4

int aplicar_limite18298(int valor) {
    if (valor > LIMITE_18298) return LIMITE_18298;
    return valor * FACTOR_18298;
}
