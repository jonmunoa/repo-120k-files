// fichero 9142 -- macros y constantes
#define LIMITE_9142 9242
#define FACTOR_9142 3

int aplicar_limite9142(int valor) {
    if (valor > LIMITE_9142) return LIMITE_9142;
    return valor * FACTOR_9142;
}
