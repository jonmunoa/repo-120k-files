// fichero 9210 -- macros y constantes
#define LIMITE_9210 9310
#define FACTOR_9210 1

int aplicar_limite9210(int valor) {
    if (valor > LIMITE_9210) return LIMITE_9210;
    return valor * FACTOR_9210;
}
