// fichero 9278 -- macros y constantes
#define LIMITE_9278 9378
#define FACTOR_9278 4

int aplicar_limite9278(int valor) {
    if (valor > LIMITE_9278) return LIMITE_9278;
    return valor * FACTOR_9278;
}
