// fichero 29270 -- macros y constantes
#define LIMITE_29270 29370
#define FACTOR_29270 1

int aplicar_limite29270(int valor) {
    if (valor > LIMITE_29270) return LIMITE_29270;
    return valor * FACTOR_29270;
}
