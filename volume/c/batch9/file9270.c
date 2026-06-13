// fichero 9270 -- macros y constantes
#define LIMITE_9270 9370
#define FACTOR_9270 1

int aplicar_limite9270(int valor) {
    if (valor > LIMITE_9270) return LIMITE_9270;
    return valor * FACTOR_9270;
}
