// fichero 29270 -- macros y constantes -- MODIFICADO
#define LIMITE_29270 29470
#define FACTOR_29270 2

int aplicar_limite29270(int valor) {
    if (valor > LIMITE_29270) return LIMITE_29270;
    return valor * FACTOR_29270;
}
