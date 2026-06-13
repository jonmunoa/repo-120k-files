// fichero 9246 -- macros y constantes
#define LIMITE_9246 9346
#define FACTOR_9246 2

int aplicar_limite9246(int valor) {
    if (valor > LIMITE_9246) return LIMITE_9246;
    return valor * FACTOR_9246;
}
