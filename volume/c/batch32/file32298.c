// fichero 32298 -- macros y constantes
#define LIMITE_32298 32398
#define FACTOR_32298 4

int aplicar_limite32298(int valor) {
    if (valor > LIMITE_32298) return LIMITE_32298;
    return valor * FACTOR_32298;
}
