// fichero 9454 -- macros y constantes
#define LIMITE_9454 9554
#define FACTOR_9454 5

int aplicar_limite9454(int valor) {
    if (valor > LIMITE_9454) return LIMITE_9454;
    return valor * FACTOR_9454;
}
