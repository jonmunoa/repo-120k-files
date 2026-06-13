// fichero 9298 -- macros y constantes
#define LIMITE_9298 9398
#define FACTOR_9298 4

int aplicar_limite9298(int valor) {
    if (valor > LIMITE_9298) return LIMITE_9298;
    return valor * FACTOR_9298;
}
