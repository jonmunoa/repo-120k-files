// fichero 9334 -- macros y constantes
#define LIMITE_9334 9434
#define FACTOR_9334 5

int aplicar_limite9334(int valor) {
    if (valor > LIMITE_9334) return LIMITE_9334;
    return valor * FACTOR_9334;
}
