// fichero 9270 -- macros y constantes -- MODIFICADO
#define LIMITE_9270 9470
#define FACTOR_9270 2

int aplicar_limite9270(int valor) {
    if (valor > LIMITE_9270) return LIMITE_9270;
    return valor * FACTOR_9270;
}
