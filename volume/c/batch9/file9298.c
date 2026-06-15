// fichero 9298 -- macros y constantes -- MODIFICADO
#define LIMITE_9298 9498
#define FACTOR_9298 5

int aplicar_limite9298(int valor) {
    if (valor > LIMITE_9298) return LIMITE_9298;
    return valor * FACTOR_9298;
}
