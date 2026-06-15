// fichero 9142 -- macros y constantes -- MODIFICADO
#define LIMITE_9142 9342
#define FACTOR_9142 4

int aplicar_limite9142(int valor) {
    if (valor > LIMITE_9142) return LIMITE_9142;
    return valor * FACTOR_9142;
}
