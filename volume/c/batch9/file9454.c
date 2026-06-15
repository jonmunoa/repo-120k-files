// fichero 9454 -- macros y constantes -- MODIFICADO
#define LIMITE_9454 9654
#define FACTOR_9454 6

int aplicar_limite9454(int valor) {
    if (valor > LIMITE_9454) return LIMITE_9454;
    return valor * FACTOR_9454;
}
